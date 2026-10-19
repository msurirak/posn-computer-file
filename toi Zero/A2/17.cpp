#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	char size;
	char soup;
	char add;
	int	cost;
	int amo;
	amo=1;
	cin>>size>>soup;
	cin>>add>>amo;
	if(size=='S'){
		cost=60;
	}
	if(size=='M'){
		cost=80;
	}
	if(size=='L'){
		cost=100;
	}
	if(soup=='T'){
		cost=cost+20;
	}
	if(add=='P'){
		cost=cost+(15*amo);
	}
	if(add=='E'){
		cost=cost+(10*amo);
	}
	cout<<cost;
}
