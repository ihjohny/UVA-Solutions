//12503 - Robot Instructions
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
	
	int t;
	sfint(t);
	forlp1(i,t){
		int n,xAxis=0;
		sfint(n);
		char str[105][105];
		forlp1(j,n){
			int num;
			char temp[105], as[105];
			sfchsq(temp);
			if( (!strcmp(temp,"LEFT")) || (!strcmp(temp,"RIGHT")))
				strcpy(str[j],temp);
			else{
				scanf("%s%d",as,&num);
				strcpy(str[j],str[num]);
			}
		}
		
		forlp1(j,n){
			if(!strcmp(str[j],"LEFT"))
				xAxis--;
			else
				xAxis++;
		}
		printf("%d\n",xAxis);
	}
	return 0;
}
