//UVA 11331
//Undefined_Error
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> PII;
#define INF 1<<28
#define ll long long 
#define SZ 100005
#define MX 100000000
#define pb push_back
#define sfint(a) scanf("%d",&a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
//vector<vector<int > >Graph;
vector<int>Graph[5000];
vector<PII>List;
int color[10005];
int black; // 0
int white; //1

bool bfs(int s)
{
	queue<int>q;
	q.push(s);
	color[s]=1;
	white++;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		forlp0(i,(int)Graph[u].size())
		{
			if(color[Graph[u][i]]==-1)
			{
				color[Graph[u][i]]=1-color[u];
				if(color[Graph[u][i]]==0) black++;
				else white++;
				q.push(Graph[u][i]);
			}
			else if(color[Graph[u][i]]== color[u])
			{
				return false;
			}
		}
	}
	return true;
}

/*
int dp[5005][5005];
int CoinChange(int i,int amount)
{
	if(i>=(int)List.size())
	{
		if(amount==0) return 1;
		else return 0;
	}
	if(dp[i][amount]!=-1) return dp[i][amount];
	int ret1=0,ret2=0;
	if(amount-List[i].first>=0) ret1=CoinChange(i+1,amount-List[i].first);
	else if(amount-List[i].second>=0) ret1=CoinChange(i+1,amount-List[i].second);
	ret2=CoinChange(i+1,amount);
	
	return dp[i][amount]=ret1|ret2;
}
*/
//
bool dp[5005][5005];
bool CoinChange(int p, int target)
{
    if(target == 0 && p ==(int)List.size())
    {
        return true;
    }
    if(target < 0) return false;
    if(p == (int)List.size()) return false;
 
    if(dp[p][target] == false) return false;
 
    dp[p][target] = CoinChange(p+1, target-List[p].first) || CoinChange(p+1, target - List[p].second);
	return  dp[p][target];
}

int main()
{
	int T,flag;
	sfint(T);
	forlp1(t,T)
	{
		flag=0;
		forlp0(ii,5005)
			Graph[ii].clear();
		
		memset(dp,true,sizeof dp);	
		List.clear();
		memset(color,-1,sizeof color);
		int a,b,c,u,v;
		sfint3(b,c,a);
		forlp0(i,a)
		{
			sfint2(u,v);
			Graph[u].pb(v);
			Graph[v].pb(u);
		}
		forlp1(tt,b+c)
		{
			if(color[tt]==-1)
			{
				black=0,white=0;
				bool check=bfs(tt);
				if(!check)
				{
				 printf("no\n");
				 flag=1;
				 break;
				}
				
				PII col;
				col.first=black;
				col.second=white;
				List.pb(col);
			}
		}
		if(flag) continue;
		/*
		//printing test
		forlp0(ii,(int)List.size())
		{
			cout<<"black :"<<List[ii].first<<" white :"<<List[ii].second<<endl;
		}
		*/ 
		bool result=CoinChange(0,b);
		if(result) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
