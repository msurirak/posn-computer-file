#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	char c;
	int x,i;
	cin>>c>>x;
	if(c=='R'){
		for(i=0;i<x;i++){
			if(i%3==0){
				cout<<"Red";
			}
			if(i%3==1){
				cout<<"Green";
			}
			if(i%3==2){
				cout<<"Blue";
			}
			cout<<" ";
		}
	}
	if(c=='G'){
		for(i=0;i<x;i++){
			if(i%3==0){
				cout<<"Green";
			}
			if(i%3==1){
				cout<<"Blue";
			}
			if(i%3==2){
				cout<<"Red";
			}
			cout<<" ";
		}
	}
	if(c=='B'){
		for(i=0;i<x;i++){
			if(i%3==0){
				cout<<"Blue";
			}
			if(i%3==1){
				cout<<"Red";
			}
			if(i%3==2){
				cout<<"Green";
			}
			cout<<" ";
		}
	}
}
