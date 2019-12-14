//10611 - The Playboy Chimp
#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arra[], int len, int value){
	int start = 0;
	int end = len - 1;
	while(start <= end){
		int mid = (start + end)/2;
		if(arra[mid] == value)
			end = mid - 1;
		else if(arra[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return start;
}

int upperBound(int arra[], int len, int value){
	int start = 0;
	int end = len - 1;
	while(start <= end){
		int mid = (start + end)/2;
		if(arra[mid] == value)
			start = mid + 1;
		else if(arra[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return start;
}

int main(){
//ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, q;
	int ladies[50009];
	int query;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> ladies[i];
	}
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> query;
		int x = lowerBound(ladies, n, query) - 1;
		int y = upperBound(ladies, n, query);
		if(x < 0)
			cout<<"X ";
		else
			cout<<ladies[x]<<" ";
		if(y >= n)
			cout<<"X"<<endl;
		else
			cout<<ladies[y]<<endl;
	}
	
	
	return 0;
}
