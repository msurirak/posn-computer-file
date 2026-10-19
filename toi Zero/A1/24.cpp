#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int y;
	int x;
	cin>>y;
	cin>>x;
	if(y<=1990){
		if(x<=1500){
			cout<<"1250";
		}
		if(x>1500&&2000>=x){
			cout<<"1400";
		}
		if(x>2000){
			cout<<"2000";
		}
	}
	if(1991<=y&&y<=1999){
		if(x<=1500){
			cout<<"1100";
		}
		if(x>1500&&2000>=x){
			cout<<"1300";
		}
		if(x>2000){
			cout<<"1700";
		}
	}
	if(y>=2000){
		if(x<=1500){
			cout<<"1000";
		}
		if(x>1500&&2000>=x){
			cout<<"1200";
		}
		if(x>2000){
			cout<<"1500";
		}
	}
}
