#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	char home;
	int e;
	float p;
	cin>>home;
	cin>>e;
	if(home=='d'){
		if(200>e){
			p= 2.5;
		}
		else{
			p=2.75;
		}
	}
	if(home=='h'){
		if(200>e){
			p= 1.75;
		}
		else{
			p= 2.00;
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<e*p;
}
