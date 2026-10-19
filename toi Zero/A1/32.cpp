#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	int i;
	cin>>x;
	for(i=0 ;i<x ;i++){
		cout<<"*";
	}
	if(x>2){
		cout<<"\n";
		for(i=0 ;i<x-2 ;i++){
			cout<<"*";
		}	
	}
	if(x>4){
		cout<<"\n";
		for(i=0 ;i<x-4 ;i++){
			cout<<"*";
		}	
	}
	
}
