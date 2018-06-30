//UVA 357
//Undefined_Error
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
#define INF 1<<28
#define ll long long 
#define SZ 100005
#define MX 100000000
#define sfint(a) scanf("%d",&a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
int coin[10]={1,5,10,25,50};
ll int dp[10][50009];
ll int Coinchange(int i,int amount)
{
	if(i>=5)
	{
		if(amount==0) return 1;
		else return 0;
	}
	if(dp[i][amount]!=-1) return dp[i][amount];
	ll int ret1=0,ret2=0;
	if(amount-coin[i]>=0) ret1=Coinchange(i,amount-coin[i]);
	ret2=Coinchange(i+1,amount);
	return dp[i][amount]=ret1+ret2;
}
int main()
{
	int n;
	ll int result;
	memset(dp,-1,sizeof dp);
	while(scanf("%d",&n)==1)
	{
	   result=Coinchange(0,n);
	   if(result<=1) printf("There is only %lld way to produce %d cents change.\n",result,n);
	   else printf("There are %lld ways to produce %d cents change.\n",result,n);
	}
	return 0;
}
