//UVA- P562
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
int N[SZ];
//int dp[100000][100000];
vector< vector<int> > dp;

/*
int knapsack(int n,int w)
{
	if(n==0 || w==0)
	{
		dp[n][w]=0;
		return 0;
	}
	if(dp[n][w]!=-1) return dp[n][w];
	if(w<N[n])
	{
		dp[n][w]=knapsack(n-1,w);
		return dp[n][w];
	}
	else
	{
		dp[n][w]=max(knapsack(n-1,w),N[n]+knapsack(n-1,w-N[n]));
		return dp[n][w];
	}

}
*/
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
		memset(N,0,sizeof(int));
	//	memset(W,0,sizeof(int));
	//	memset(dp,-1,sizeof (dp));
		int m,total=0,tot;
		sfint(m);
		forlp1(i,m)
		{
			sfint(N[i]);
			total+=N[i];
		}
		tot=total/2;
		dp.clear();
		dp.resize(m + 1, vector<int>(tot + 1, 0));
		
		
		int k=knapsack(m,tot);
		int ans=total-(k*2);
		printf("%d\n",ans);
	}
	return 0;
}
