#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	char t;
	cin>>x;
	cin>>t;
	if(t=='C'||t=='c'){
		if(x<0){
			cout<<"solid";
		}
		if(0<=x&&x<=100){
			cout<<"liquid";
		}
		if(x>100){
			cout<<"gas";
		}
	}
	if(t=='F'||t=='f'){
		if(x<32){
			cout<<"solid";
		}
		if(32<=x&&x<=212){
			cout<<"liquid";
		}
		if(x>212){
			cout<<"gas";
		}
	}
}
