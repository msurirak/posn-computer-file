#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(1<=x&&x<=9){
		if(x==1){
			cout<<"I";
		}
		if(x==2){
			cout<<"II";
		}
		if(x==3){
			cout<<"III";
		}
		if(x==4){
			cout<<"IV";
		}
		if(x==5){
			cout<<"V";
		}
		if(x==6){
			cout<<"VI";
		}
		if(x==7){
			cout<<"VII";
		}
		if(x==8){
			cout<<"VIII";
		}
		if(x==9){
			cout<<"IX";
		}
	}
	else{
		if(x>=0){
			cout<<"Error : Out of range";
		}
		else{
			cout<<"Error : Please input positive number";
		}
	}
}
