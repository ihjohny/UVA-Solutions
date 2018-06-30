//Uva p10130
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
int N[SZ],W[SZ];
int dp[1000][1000];
int knapsack(int n,int w)
{
	if(n==0||w==0)
	{
		dp[n][w]=0;
		return 0;
	}
	if(dp[n][w]!=-1) return dp[n][w];
	if(w<W[n])
	{
		dp[n][w]=knapsack(n-1,w);
	}
	else
	{
		dp[n][w]=max(knapsack(n-1,w),N[n]+knapsack(n-1,w-W[n]));
	}
	return dp[n][w];
	
}
int main()
{
	int t;
	sfint(t);
	forlp1(i,t)
	{
		memset(N,0,sizeof(int));
		memset(W,0,sizeof(int));
		int n;
		sfint(n);
		forlp1(j,n)
		{
			sfint2(N[j],W[j]);
		}
		int g,G,result=0;
		sfint(g);
		forlp1(j,g)
		{
			memset(dp,-1,sizeof(dp));
			sfint(G);
			result+=knapsack(n,G);
		}
		printf("%d\n",result);
	}
	return 0;
}
