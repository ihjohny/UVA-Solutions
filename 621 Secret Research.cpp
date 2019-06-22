//621 - Secret Research
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
//#define INF 99999999
#define INF 1<<28
#define ll long long
#define SZ 100009
#define MX 100000000
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
typedef pair<int,int> PII;
#define SIZE 1000000

int main() {

	int n;
	sfint(n);
	forlp0(i,n){
		char str[10005];
		sfchsq(str);
		int len=strlen(str);
		
		if( !(strcmp(str,"1")) || !(strcmp(str,"4")) || !(strcmp(str,"78")))
			printf("+\n");
		else if( str[len-1]=='5' && str[len-2]=='3' )
			printf("-\n");
		else if(str[0]=='9' && str[len-1]=='4')
			printf("*\n");
		else
			printf("?\n");
	}
	return 0;
}
