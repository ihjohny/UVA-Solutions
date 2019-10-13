//11340 - Newspaper
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

	int testCase;
	sfint(testCase);
	forlp1(t,testCase){
		int paid, m;
		lli price;
		string news;
		char ch;
		map<char, lli>characters;
		sfint(paid);
		forlp1(k, paid){
		    getchar();
			sfch(ch);
			sfllint(price);
			characters[ch] = price;
		}
        sfint(m);
        lli cost = 0;
        cin.ignore();
        forlp0(i, m){
            news = "";
            getline(cin, news);
            int len = news.length();
            forlp0(j, len){
                if(characters.find(news[j]) != characters.end())
                    cost += characters[news[j]];
            }
        }

        double tCost = cost/100.00;
        cout<<FIXED_FLOAT(tCost, 2)<<"$"<<endl;

	}
	return 0;
}

