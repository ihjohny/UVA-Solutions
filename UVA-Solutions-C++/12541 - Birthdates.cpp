//12541 - Birthdates
//#include<iostream>
#include<bits/stdc++.h>
#define SZ 200009
using namespace std;

class person{
public:
	char name[16];
	int dd, mm, yyyy;
	person(){}
	person(int dd, int mm, int yyyy){
		this->dd = dd;
		this->mm = mm;
		this->yyyy = yyyy;
	}
};
bool comparator(person p1, person p2){
	if(p1.yyyy < p2.yyyy)
		return true;
	else if(p1.yyyy > p2.yyyy)
		return false;
	else{
		if(p1.mm < p2.mm)
			return true;
		else if(p1.mm > p2.mm)
			return false;
		else{
			if(p1.dd < p2.dd)
				return true;
			else
				return false;
		}
	}
}
int main(){
	
	int n;
	person persons[105];
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		char name[16];
		int dd, mm, yyyy;
		scanf("%s %d %d %d",name, &dd, &mm, &yyyy);
		strcpy(persons[i].name,name);
		persons[i].dd = dd;
		persons[i].mm = mm;
		persons[i].yyyy = yyyy;
	}
	sort(persons, persons+n, comparator);
	cout<<persons[n-1].name<<endl;
	cout<<persons[0].name<<endl;
	
	return 0;
}
