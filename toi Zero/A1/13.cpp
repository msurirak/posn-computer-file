#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	char x;
	int y;
	cin>>x;
	cin>>y;
	if(x=='H'){
		if(4567==y){
			cout<<"safe unlocked";
		}
		else{
			cout<<"safe locked - change digit";
		}
	}
	else{
		if(4567==y){
			cout<<"safe locked - change char";
		}
		else{
			cout<<"safe locked";
		}
	}
}
