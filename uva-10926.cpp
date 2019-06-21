//uva-10926
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
int dp[1005];
int visited[1005];
vector<int>graph[1005];
int longest(int u)
{
	visited[u]=1;
	if(dp[u]!=-1) return dp[u];
	int max=0;
	forlp0(i,(int)graph[u].size())
	{
		if(visited[graph[u][i]]==0)
		{
			max+=longest(graph[u][i]);
		}
	}
	return dp[u]=max+1;
}

int main()
{
	while(1)
	{
		memset(dp,-1,sizeof dp);
		memset(visited,0,sizeof visited);
		int n,t;
		sfint(n);
		if(n==0) break;
		forlp1(i,n)
		{
			sfint(t);
			forlp1(j,t)
			{
				int v;
				sfint(v);
				graph[i].push_back(v);
			}
		}
		//forlp1(i,n){forlp0(j,(int)graph[i].size()){cout<<graph[i][j]<<" ";}cout<<endl;}
		int maxresult=0;
		int res;
		forlp1(i,n)
		{
			memset(dp,-1,sizeof dp);
			memset(visited,0,sizeof visited);
			if(maxresult<longest(i))
			{
				maxresult=longest(i);
				res=i;
			}
		}
		printf("%d\n",res);
		vector<int>tt[1005]; swap(tt,graph);
	}
	return 0;
}
