//10127 - Ones
//Love Coffe and Code
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1<<28
#define lli long long int
#define SZ 1000009
#define MX 1000000000
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
#define forlp2(i,n) for(int i=2;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
#define mem(a,b) memset(a, (b), sizeof(a))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef pair<int,int> PII;

int main() {
IOS

	int n;
	while(scanf("%d",&n) != EOF){
		int k = 1;
		while(1){
			int res = 0;
			for(int i = 1; i<=k; i++){
				res = ((res*10) + 1) % n;
			}
			if(res == 0){
				cout<<k<<endl;
				break;
			}
			k++;
		}
	}
	
    return 0;
}
