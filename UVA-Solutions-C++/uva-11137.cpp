//Uva 11137
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
int make;
int coin[50];
long long int dp[50][10009];

long long int CoinChange(int i,int amount)
{
	if(i>=22)
	{
		if(amount==0) return 1;
		else return 0;
	}
	if(dp[i][amount]!=-1) return dp[i][amount];
	long long int ret1=0,ret2=0;
	if(amount-coin[i]>=0) 
		ret1=CoinChange(i,amount-coin[i]);
	ret2=CoinChange(i+1,amount);
	
	dp[i][amount]=ret1+ret2;
	return dp[i][amount];
}
int main()
{
	make=0;
	forlp1(i,21)
	{
		coin[i]=pow(i,3);
	}
	memset(dp,-1,sizeof dp);
	//forlp1(i,21) cout<<"coin "<<i<<" "<<coin[i]<<endl;
	while(scanf("%d",&make)==1)
	{
		cout<<CoinChange(1,make)<<endl;
	}
	return 0;
}
