//11362 - Phone List
//simple trie tree
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

struct node{
    bool endMark;
    node* next[10];
	node(){
	    endMark = false;
		forlp0(i, 10){
			next[i] = NULL;
		}
	}
}*root;

bool insert(string str){
    node* current = root;
    forlp0(i, str.length()){
       int n = str[i] - '0';
       if(current->endMark == true){
            return false;
       }
       if(current->next[n] == NULL){
            current->next[n] = new node();
       }
       current = current->next[n];
    }
    current->endMark = true;
    forlp0(i, 10){
        if(current->next[i]!=NULL)
            return false;
    }
    return true;
}

void delTrie(node* n){
    forlp0(i, 10){
        if(n->next[i]!=NULL){
            delTrie(n->next[i]);
        }
    }
    delete(n);
}

int main(){
//IOS

    int testCase;
    sfint(testCase);
    forlp1(t, testCase){
        int n;
        bool ans = true;
        string str[SZ];
        sfint(n);
        forlp1(i, n){
            cin>>str[i];
        }

        //solve
        root = new node();
        forlp1(i, n){
            if(!insert(str[i])){
                ans = false;
            }
        }
        if(ans)
            printf("YES\n");
        else
            printf("NO\n");
        delete(root);

    }

	return 0;
}
