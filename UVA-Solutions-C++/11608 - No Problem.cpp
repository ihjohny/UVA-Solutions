//11608 - No Problem
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
#define FIXED_FLOAT(x,n) fixed <<setprecision(n)<<(x)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define SZ 15009
typedef pair<int,int> PII;

int main(){
//IOS
    int testCase = 0;
    int s;
    while(1){
        testCase++;
        sfint(s);
        if(s < 0) break;
        int problem = 0;
        int available[15]={0};
        int required[15]={0};
        available[0] = s;
        forlp1(i, 12)
            sfint(available[i]);
        forlp1(i, 12)
            sfint(required[i]);

        printf("Case %d:\n",testCase);
        forlp1(i, 12){
            problem += available[i-1];
            if(required[i] > problem){
                printf("No problem. :(\n");
            }
            else{
                printf("No problem! :D\n");
                problem -= required[i];
            }
        }

    }
	return 0;
}

