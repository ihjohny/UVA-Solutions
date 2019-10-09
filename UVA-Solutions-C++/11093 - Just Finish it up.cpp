//11093 - Just Finish it up
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1<<28
#define lli long long int
#define ulli unsigned long long int
#define MX 1000000000
#define SZ 100009
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
#define rvforlp0(i,n) for(int i=n-1;i>=0;i--)
#define rvforlp1(i,n) for(int i=n-1;i>0;i--)
#define mem(a,b) memset(a, (b), sizeof(a))
#define mem2d(a,n,m,b) memset(a, (b), sizeof(a[0][0] * n * m))
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef pair<int,int> PII;

int main(){
//IOS

	int testCase;
	sfint(testCase);
	forlp1(t, testCase){
		int n,sum=0;
		int available[SZ];
		int needed[SZ];
		int adjust[SZ];
		sfint(n);
		forlp1(i, n)
			sfint(available[i]);
		forlp1(i, n)
			sfint(needed[i]);

		///
		queue<int>container;
		forlp1(i, n){
			adjust[i] = available[i] - needed[i];
			sum += adjust[i];
			if(adjust[i] >=0)
                container.push(i);
		}

        printf("Case %d: ",t);
        if(sum < 0){
            printf("Not possible\n");
        }
        else{
            int index = -1;
            while(!container.empty()){
                int f = container.front();
                container.pop();
                int su = adjust[f];
                int k = f;
                for(int j=1; j<n; j++){
                    k++;
                    if(k > n) k = 1;
                    su+=adjust[k];
                    if(su < 0){
                        break;
                    }
                }
                if(su >= 0){
                    index = f;
                    break;
                }
            }
            if(index == -1)
                printf("Not possible\n");
            else
                printf("Possible from station %d\n",index);
        }

	}
	return 0;
}
