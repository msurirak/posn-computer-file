#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	float b;
	float h;
	float I;
	char x;
	cin>>x;
	cin>>b;
	cin>>h;
	if(x=='T'){
		I = 0.5;
	}
	if(x=='R'){
		I = 1;
	}
	cout<<b*h*I;
}
