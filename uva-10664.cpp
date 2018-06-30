//UVA- P10664
//Undefined_Error
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
#include<string.h>
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
//int N[SZ];
vector<int>N;
vector< vector<int> > dp;

int knapsack(int n,int w)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0 ||j==0)
			{
				dp[i][j]=0;
			}
			else if(j<N[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],N[i]+dp[i-1][j-N[i]]);
			}
		}
	}
	return dp[n][w];
}

int main()
{
	int n;
	sfint(n);
	forlp1(t,n)
	{
		//memset(N,0,sizeof(int));
		N.clear();
		int x,m,total=0,tot;
		N.push_back(-1);
		char num[1000];
		getchar();
		scanf("%[^\n]",num);
		stringstream stream(num);
		while(stream>>x)
		{
			total+=x;
			N.push_back(x);
		}
		m=N.size()-1;
		/*
		forlp1(g,m)
		{
			cout<<N[g]<<" ";
		}
		*/ 
		
		tot=total/2;
		dp.clear();
		dp.resize(m + 1, vector<int>(tot + 1, 0));
		
		
		int k=knapsack(m,tot);
		int ans=total-(k*2);
		
		if(!ans)
			printf("YES\n");
		else
			printf("NO\n");
		 
	}
	return 0;
}
