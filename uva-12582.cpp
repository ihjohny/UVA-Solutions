//uva-12582
//Undefined_Error
//Dept. ICE, NSTU-11 Batch
#include<bits/stdc++.h>
using namespace std;
#define INF 1<<28
#define ll long long
#define SZ 100009
#define MX 100000000
#define sfint(a) scanf("%d",&a)
#define sfint2(a,b) scanf("%d%d",&a,&b)
#define sfint3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define forlp0(i,n) for(int i=0;i<n;i++)
#define forlp1(i,n) for(int i=1;i<=n;i++)
#define forlpa(i,a,n) for(int i=a;i<=n;i++)
#define rvforlp(i,n) for(int i=n-1;i>=0;i--)
typedef pair<int,int> PII;

int main()
{
	int n;
	char graph[1000];
	sfint(n);
	forlp0(i,n)
	{
		int arra[100]={0};
        scanf("%s",graph);
        int len=strlen(graph);
        stack <char> S;
        S.push('@');
        forlp0(j,len)
        {
			if(S.top()!='@')
			{
				arra[int(S.top())]++;
			}
			
			if(S.top()!=graph[j])
				S.push(graph[j]);
			else
				S.pop();
			
			if(j==len-1)
				arra[int(graph[j])]--;
		}
		
		cout<<"Case "<<i+1<<endl;
		forlpa(i,65,90)
		{
			if(arra[i]!=0)
					printf("%c = %d\n",i,arra[i]);
		}
	}
	return 0;
}
