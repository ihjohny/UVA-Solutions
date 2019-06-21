//490 - Rotating Sentences
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
//#define INF 99999999
#define INF 1<<28
#define ll long long
#define SZ 100009
#define MX 100000000
#define sfint(a) scanf("%d",&a)
#define sfchsq(a) scanf("%s",a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
typedef pair<int,int> PII;
#define SIZE 500005
int main(){
	
	string str[105];
	int n=0,maxLine=0;
	while(getline(cin,str[n])){
		if((int)str[n].length()> maxLine)
			maxLine=(int)str[n].length();
		n++;
	}
	forlp0(i,maxLine){
		rvforlp(j,n){
			if((int)str[j].length()>i){
				cout<<str[j][i];
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
