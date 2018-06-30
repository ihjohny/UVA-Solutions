//uva p10066
//By MD.Imam Hossain Johny
//Dept. ICE, NSTU-11 batch
#include<bits/stdc++.h>
using namespace std;
#define SZ 1005
#define MX 10000000
//char A[SZ],B[SZ];
int A[SZ],B[SZ];
int lenA,lenB;
int dp[SZ][SZ];
bool visited[SZ][SZ];
string ans;

int calcLCS(int i,int j)
{
	if(A[i]=='\0'||B[j]=='\0') 
		return 0;
	if(visited[i][j]) 
		return dp[i][j];
	
	int ans=0;
	if(A[i]==B[j]) 
		ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=true;
	dp[i][j]=ans;
	return dp[i][j];
}

void printLCS(int i,int j)
{
	if(A[i]=='\0' ||B[j]=='\0')
	{
		cout<<ans<<endl;
		return ;
	}
	if(A[i]==B[j])
	{
		ans+=A[i];
		printLCS(i+1,j+1);
	}
	else
	{
		if(dp[i+1][j]>dp[i][j+1])
			printLCS(i+1,j);
		else if(dp[i+1][j]<dp[i][j+1]) 
			printLCS(i,j+1);
		else
		{
			if(A[i]<B[j])
				printLCS(i,j+1);
			else
				printLCS(i+1,j);
		}	
	}
}
int main()
{
	int test=1;
	lenA=0;lenB=0;
	while(1)
	{
	
	memset(dp,0,sizeof dp);
	memset(A,0,sizeof A);
	memset(B,0,sizeof B);
	memset(visited,0,sizeof visited);	
	
	scanf("%d%d",&lenA,&lenB);
	if(lenA==0 && lenB==0) break;
	for(int i=0;i<lenA;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=0;i<lenB;i++)
	{
		scanf("%d",&B[i]);
	}
	printf("Twin Towers #%d\n",test++);
	printf("Number of Tiles : %d\n\n",calcLCS(0,0));
	
	}
	return 0;
}
