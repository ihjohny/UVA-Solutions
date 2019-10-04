//UVA- P990
//Undefined_Error
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define SZ 100005
#define MX 100000000
#define sfint(a) scanf("%d",&a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
int N[SZ],W[SZ];
int dp[1000][1000];
vector<int>bag;

int knapsack(int n,int w)
{
	if(n==0 || w==0) 
	{
		dp[n][w]=0;
		return 0;
	}
	if(dp[n][w]!=-1) return dp[n][w];
	if(W[n]>w)
	{
		dp[n][w]=knapsack(n-1,w);
	}
	else
	{
		dp[n][w]=max(knapsack(n-1,w),N[n]+knapsack(n-1,w-W[n]));
	}
	return dp[n][w];
}

void pick(int n,int w)
{
	if(n==0 || w==0) return ;
	if(dp[n][w]!=dp[n-1][w])
	{
//		cout<<n<<" ";
		bag.push_back(n);
		pick(n-1,w-W[n]);
	}
	else
	{
		pick(n-1,w);
	}
}

int main()
{
	bool isFirst=true;
	int t,w,n;
	while (cin >> t >> w >> n)
	{
	
	if (isFirst) isFirst = false;
	else cout << endl; 
		
	memset(N,0,sizeof(int));
	memset(W,0,sizeof(int));
	memset(dp,-1,sizeof (dp));
	bag.clear();
	
	t=t/(3*w);
	forlp1(i,n)
	{
		sfint2(W[i],N[i]);
	}
	int result=knapsack(n,t);
//	printf("output :\n");
	printf("%d\n",result);
	pick(n,t);
	int bsize=bag.size();
	printf("%d\n",bsize);
	rvforlp(i,bsize)
	{
		printf("%d %d\n",W[bag[i]],N[bag[i]]);
	}
//	cout<<endl;
	}
	return 0;
}
