//12015 - Google is Feeling Lucky
//Love Coffe and Code
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1<<28
#define ll long long
#define SZ 1000009
#define MX 100000000
#define SIZE 1000000
#define sfint(a) scanf("%d",&a)
#define sfllint(a) scanf("%lld",&a)
#define sfch(a) scanf("%c",&a)
#define sfchsq(a) scanf("%s",a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfllint2(a,b) scanf("%lld%lld",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
#define mem(a,b) memset(a, (b), sizeof(a))

typedef pair<int,int> PII;


int main() {
ios :: sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
	
	int t;
	sfint(t);
	forlp1(i,t){
		char str[15][10000];
		int relevance[15];
		int maxRelevance = 0;
		forlp1(j,10){
			scanf("%s %d",str[j],&relevance[j]);
			maxRelevance = max(maxRelevance,relevance[j]);
		}
		
		
		//Solve
		cout<<"Case #"<<i<<":"<<endl;
		forlp1(j,10){
			if(relevance[j] == maxRelevance){
				cout<<str[j]<<endl;
			}
		} 
	}
	
	return 0;
}
