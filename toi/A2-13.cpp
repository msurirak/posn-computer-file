#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	char x;
	char y;
	int a;
	int i;
	int o;
	int r;
	r = 0;
	cin>>x>>a;
	cin>>y>>i>>o;
	if(x=='H'){
		r = 5*a;
	}
	if(x=='O'){
		r = 3*a;
	}
	if(x=='J'){
		r = 2*a;
	}
	if(y=='R'&&i==1){
		cout<<(12*o)+r;
	}
	if(y=='R'&&i==2){
		cout<<(18*o)+r;
	}
	if(y=='R'&&i==3){
		cout<<(25*o)+r;
	}
	if(y=='T'&&i==1){
		cout<<(15*o)+r;
	}
	if(y=='T'&&i==2){
		cout<<(20*o)+r;
	}
	if(y=='T'&&i==3){
		cout<<(30*o)+r;
	}
	if(y=='M'&&i==1){
		cout<<(10*o)+r;
	}
	if(y=='M'&&i==2){
		cout<<(15*o)+r;
	}
	if(y=='M'&&i==3){
		cout<<(20*o)+r;
	}
}
