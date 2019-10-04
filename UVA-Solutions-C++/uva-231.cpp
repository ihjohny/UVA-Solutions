//uva 231
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
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
int dp[SZ],dir[SZ];
int input[SZ];
int i=1;
int longest(int u)
{
	if(dp[u]!=-1) return dp[u];
	int max=0;
	forlpa(v,u+1,i-1)
	{
		if(input[v]<=input[u])
		{
			if(longest(v)>max)
				max=longest(v);
		}
	}
	return dp[u]=max+1;
}

int main()
{
	int n,result=0,t=0;
	memset(dp,-1,sizeof dp);
	while(1)
	{
		sfint(n);
		if(n==-1)
		{
			forlp1(t,i-1)
			{
				if(longest(t)>result)
					result=longest(t);
			}
			if(result==0) return 0;
			if(t)
			{ 
				printf("\n"); 
			}
			printf("Test #%d:\n", ++t);
			printf("  maximum possible interceptions: %d\n", result);
			memset(input,0,sizeof input);
			memset(dp,-1,sizeof dp);
			result=0;
			i=1;
		}
		else
		{
			input[i++]=n;
		}
		
	}
	return 0;
}
