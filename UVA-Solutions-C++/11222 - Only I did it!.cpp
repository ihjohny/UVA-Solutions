//11222 - Only I did it!
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1<<28
#define lli long long int
#define ulli unsigned long long int
#define MX 1000000000
#define SZ 1009
#define sfint(a) scanf("%d",&a)
#define sfllint(a) scanf("%lld",&a)
#define sfch(a) scanf("%c",&a)
#define sfchsq(a) scanf("%s",a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfllint2(a,b) scanf("%lld%lld",&a,&b)
#define sfllint3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sfllint4(a,b,c,d) scanf("%lld%lld%lld%lld",&a,&b,&c,&d)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlp2(i,n) for(int i=2;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp0(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
#define mem(a,b) memset(a, (b), sizeof(a))
#define mem2d(a,n,m,b) memset(a, (b), sizeof(a[0][0] * n * m))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<int,int> PII;

int main(){
//IOS

	int testCase;
	sfint(testCase);
	forlp1(t, testCase){
		map<int, bool>problems[4];
		vector<int>friends[4];
		vector<int>ans[4];
		int a,b,c;
		
		//input
		sfint(a);
		forlp1(i, a){
			int temp;
			sfint(temp);
			friends[1].pb(temp);
			problems[1][temp]=true;
		}
		sfint(b);
		forlp1(i, b){
			int temp;
			sfint(temp);
			friends[2].pb(temp);
			problems[2][temp]=true;
		}
		sfint(c);
		forlp1(i, c){
			int temp;
			sfint(temp);
			friends[3].pb(temp);
			problems[3][temp]=true;
		}
		
		//
		int count[4]={0};
		forlp1(first, 3){
			int second = 2;
			int third = 3;
			if(first == 2){
				second = 3;
				third = 1;
			}
			else if(first == 3){
				second = 1;
				third = 2;
			}
			
			forlp0(i, (int)friends[first].size()){
				int f = friends[first][i];
				if((problems[second].find(f) == problems[second].end()) && 
					(problems[third].find(f) == problems[third].end())){
						count[first]++;
						ans[first].pb(f);
					}
			}	
		}
		int mx = max(count[1], max(count[2], count[3]));
		cout<<"Case #"<<t<<":"<<endl;
		forlp1(i, 3){
			if(count[i] == mx){
				sort(ans[i].begin(), ans[i].end());
				cout<<i<<" "<<ans[i].size();
				forlp0(j, (int)ans[i].size()){
					cout<<" "<<ans[i][j];
				}
				cout<<endl;
			}
		}
		
	}
	return 0;
}
