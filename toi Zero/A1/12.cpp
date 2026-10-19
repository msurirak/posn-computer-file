#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string x;
	char y;
	int e;
	int z;
	int r;	
	cin>>x;
	cin>>y;
	e = ((x[0]-48)*10)+(x[1]-48);
	z = ((x[1]-48)*10)+(x[0]-48);
	if(y=='+'){
		r=e+z;
	}
	else{
		r=e*z;
	}
	cout<<e<<" "<<y<<" "<<z<<" = "<<r;
}
