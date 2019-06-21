//694 - The Collatz Sequence
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
	
	long long int a,l,t=0;
	while(1){
		t++;
		sfllint2(a,l);
		long long int aa=a;
		if(a<0 && l<0)
			break;
		long long int count=0;
		while(a<=l && a!=1){
			count++;
			if(a%2==0){
				a=a/2;
			}
			else{
				a=3*a+1;
			}
		}
		if(a==1)count++;
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,aa,l,count);
	}
	return 0;
}
