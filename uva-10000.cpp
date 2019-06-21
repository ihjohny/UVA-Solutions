//uva-10000
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
vector<int>graph[1005];
int dp[1005][1005],dir[1005];

int longest(int u,int t)
{
	if(dp[u][t]!=-1) return dp[u][t];
	int maxi=-1;
	forlp0(i,(int)graph[u].size())
	{
		maxi=max(maxi,1+longest(graph[u][i],t));
	}
	return dp[u][t]=maxi;
}

int main()
{
	int n,s,u,v;
	int t=0;
	while(sfint(n) && n)
	{
		t++;
//		memset(dp,-1,sizeof dp);
		for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                dp[i][j]=-1;
            }
            dp[i][i]=0;
        }
		sfint(s);
		while( sfint2(u,v) &&(u&&v) )
		{
			graph[u].push_back(v);
		}
		
		int longpath=-1,des=0;
		forlp1(i,n)
		{
			if(longpath<longest(s,i))
			{
				longpath=longest(s,i);
				des=i;
			}
		}
		 
		printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n",t,s,longpath,des);
		vector<int>tt[1005]; swap(tt,graph);
	}
	return 0;
}
