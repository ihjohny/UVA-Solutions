//414 - Machined Surfaces
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
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
typedef pair<int,int> PII;
#define SIZE 1000000

int main(){
	
	int n;
	while(1){
		sfint(n);
		char str[30][30];
		if(n==0) break;
		int minSpace=25,result=0;
		forlp0(i,n){
			int space=0;
			getchar();
			forlp0(j,25){
				sfch(str[i][j]);
				if(str[i][j] == ' ')
					space++;
			}
			if(space<minSpace)
				minSpace=space;
		}
		
		forlp0(i,n){
			int space=0;
			forlp0(j,25){
				if(str[i][j] == ' ')
					space++;
			}
			result+=space-minSpace;
		}
 
		cout<<result<<endl;
	}
	return 0;
}
