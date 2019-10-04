//UVA-544
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
//#define INF 1<<28
#define ll long long
#define SZ 100009
#define MX 100000000
#define sfint(a) scanf("%d",&a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
typedef pair<int,int> PII;
#define SIZE 100005
#define INF 99999999
struct Edge{
	int u,v,cost;
};
bool operator<(Edge a,Edge b){
	return a.cost>b.cost;
}

vector<Edge> E;
int p[1000];

int find(int x)
{
	if(p[x]==x) return x;
	return p[x]=find(p[x]);
}

int Result(int s,int d){
 
	vector<PII> spanningTree[1000];
	int visited[1000]={0};
	PII address[1000];
	for(int i=0;i<1000;i++){
		p[i]=i;
	}
	sort(E.begin(),E.end());
	int size=E.size();
	for(int i=0;i<size;i++){
		if( find( E[i].u ) != find( E[i].v )){
			p[find(E[i].u)]=find(E[i].v);
			//cout<<E[i].u
			spanningTree[E[i].u].push_back(make_pair(E[i].v ,E[i].cost) );
			spanningTree[E[i].v].push_back(make_pair(E[i].u ,E[i].cost) );
		}
	}
	
	queue<int>q;
	q.push(s);
	visited[s]=1;
	int u;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for(int i=0;i<(int)spanningTree[u].size();i++)
		{ 
			if(visited[spanningTree[u][i].first]==0)
			{
				q.push(spanningTree[u][i].first);
				visited[spanningTree[u][i].first]=1;
				address[spanningTree[u][i].first].first=u;
				address[spanningTree[u][i].first].second=spanningTree[u][i].second;
			}
		}
	}
	
	int m=INF;
	
	int now=d;
	while(now!=s){
		m=min(m,address[now].second);
	//	cout<<now<<" "<<address[now].first<<" "<<address[now].second<<endl;
		now=address[now].first;
	//	m++;
	}
	
	return m;
}
int main()
{
	int city,road,cost,s,d,testCase=0;
	string source,dest;
	while(1){
		memset(p,0,sizeof p);
		vector<Edge>e; swap(e,E);
		sfint2(city,road);
		int n=1;
		map<string,int>Map;
		if(city==0 && road==0)
			return 0;
		forlp0(i,road){
			cin>>source;
			if(Map[source]==0)
				Map[source]=n++;
			cin>>dest;
			if(Map[dest]==0)
				Map[dest]=n++;
			sfint(cost);
			
			
			Edge temp;
			temp.u=Map[source];
			temp.v=Map[dest];
			temp.cost=cost;
			E.push_back(temp);
			temp.u=Map[dest];
			temp.v=Map[source];
			temp.cost=cost;
			E.push_back(temp);
			
		}
		cin>>source;
		s=Map[source];
		cin>>dest;
		d=Map[dest];
		
		int res=Result(s,d);
		printf("Scenario #%d\n",++testCase);
		if(res<=1 )
			printf("%d ton\n\n",res);
		else
			printf("%d tons\n\n",res);
			
	}
    return 0;
}
