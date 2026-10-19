#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string x;
	string y;
	cin>>x;
	if(x.size()==3){
		cout<<","<<x[0]<<x[1]<<x[2]<<x[3];
	}
	if(x.size()==4){
		cout<<x[0]<<","<<x[1]<<x[2]<<x[3]<<x[4];
	}
	if(x.size()==5){
		cout<<x[0]<<x[1]<<","<<x[2]<<x[3]<<x[4]<<x[5];
	}
	if(x.size()==6){
		cout<<x[0]<<x[1]<<x[2]<<","<<x[3]<<x[4]<<x[5]<<x[6];
	}
}
