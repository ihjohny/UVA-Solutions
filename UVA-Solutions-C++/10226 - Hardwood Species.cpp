//10226 - Hardwood Species
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define INF 1<<28
#define lli long long int
#define ulli unsigned long long int
#define MX 1000000000
#define SZ 10009
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
    getchar();
    getchar();
    forlp1(t, testCase){
       vector<string>str;
       map<string, int>mp;
       int count = 0;
       while(1){
            string in;
            getline(cin, in);
            if(in !=""){
                str.push_back(in);
                mp[in]++;
                count++;
            }
            else
                break;
       }
       //solve
       map<string, int>::iterator it;
       for(it = mp.begin(); it != mp.end(); it++)
            cout<<it->first<<" "<<fixed << setprecision(4)<<(it->second*100.00)/count<<endl;
       if(t != testCase)
            cout<<endl;
    }

	return 0;
}
