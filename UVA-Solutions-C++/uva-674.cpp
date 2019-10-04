//uva p674
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
int coin[10];
int dp[10000][10000];
int totalCoin;
int make;
int call(int i,int amount)
{
	if(i>=totalCoin+1)
	{
		if(amount==0) return 1;
		else return 0;
	}
	if(dp[i][amount]!=-1) return dp[i][amount];
	int ret1=0,ret2=0;
	if(amount-coin[i]>=0)  
		ret1=call(i,amount-coin[i]);
	ret2=call(i+1,amount);
	
	return dp[i][amount]=ret1+ret2;
}

int main()
{
	totalCoin=5;
	coin[1]=50;
	coin[2]=25;
	coin[3]=10;
	coin[4]=5;
	coin[5]=1;
	int make,result;
	memset(dp,-1,sizeof dp);
	while(cin>>make)
	{
		result=call(1,make);
		cout<<result<<endl;
	}
	return 0;
}
