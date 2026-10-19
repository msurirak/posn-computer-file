#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	int a;
	int b;
	cin>>a;
	cin>>b;
	if(a==3&&b>=21){
		cout<<"spring";
	}
	if(a==6&&b>=21){
		cout<<"summer";
	}
	if(a==9&&b>=21){
		cout<<"fall";
	}
	if(a==12&&b>=21){
		cout<<"winter";
	}
	else{
		if(a==1||a==2){
			cout<<"winter";
		}
		if(a==4||a==5){
			cout<<"spring";
		}
		if(a==7||a==8){
			cout<<"summer";
		}
		if(a==10||a==11){
			cout<<"fall";
		}
	}
}
