//11824 - A Minimum Land Price
//#include<iostream>
#include<bits/stdc++.h>
#define SZ 200009
using namespace std;

int main(){
	
	int testCase;
	cin >> testCase;
	for(int t = 1; t <= testCase; t++){
		int lands[45] = {0};
		int i = 0;
		long long int cost = 0;
		while((scanf("%d",&lands[i]) == 1 && lands[i])){
			i++;
		}
		sort(lands, lands+i, greater<int>());			
		for(int j = 0; j < i; j++){
			cost += (2 * pow(lands[j],(j+1)));
		}
		if(cost > 5000000)
			cout << "Too expensive" <<endl;
		else
			cout<<cost<<endl;
	}
	
	return 0;
}
