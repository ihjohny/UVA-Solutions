//12554 - A Special "Happy Birthday Song!!!
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
	
	int n, peopleComplete = 0,songComplete=0;
	char people[105][105];
	char song[105][105]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	sfint(n);
	forlp0(i,n)
		sfchsq(people[i]);
		
	int j=0;
	int k=0;
	while(peopleComplete!=1 || songComplete!=1){
			cout<<people[j]<<": ";
			cout<<song[k]<<endl;
			
			j++;
			k++;
			if(j==n){ j=0; peopleComplete=1; }
			if(k==16){ k=0; if(peopleComplete==1) songComplete=1; }
	} 
		
	return 0;
}
