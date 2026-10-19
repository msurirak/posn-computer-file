#include <iostream>
#include <algorithm>
using namespace std;
int main() { 
	int n;
	cin>>n;
	int array[n];
	for(int i = 0 ; i < n ; i++ ){ 
		cin>>array[i];
	}
	int luckyNumber;
	bool yes=true;
	cin>>luckyNumber;
	int k ;
	for( int i = 0;i < n-1 ; i++){
		k = luckyNumber-array[i];
		if(k<=0){continue;}	
		for( int j=i+1;j<n;j++){
			if(k==array[j]){
				cout<<array[i]<<" "<<array[j]<<endl;
				yes=false;
			}
		}
	}
	if(yes==true){
		cout<<"No";
	}
}
