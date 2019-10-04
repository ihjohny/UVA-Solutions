// 10082 - WERTYU
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1<<28
#define lli long long int
#define ulli unsigned long long int
#define MX 1000000000
#define SIZE 1000000
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
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
#define mem(a,b) memset(a, (b), sizeof(a))
#define mem2d(a,n,m,b) memset(a, (b), sizeof(a[0][0] * n * m))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define SZ 100000000
typedef pair<int,int> PII;

string keymap = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
IOS

	string line;
	while(getline(cin,line)){
//	cout<<line<<endl;

	forlp0(i, (int)line.length()){
		forlp0(j, 47){
			if( line[i] == keymap[j] )
				line[i] = keymap[j-1];
		}
	}
	cout<<line<<endl;
	}
	return 0;
}


