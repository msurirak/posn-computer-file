#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	int q;
	int d;
	float p;
	float r;
	char s;
	cin>>q;
	cin>>p;
	cin>>s;
	if(s=='y'){
		if(500>=p*q){
			d = 10;
		}
		else{
			if(1000>=p*q){
				d = 15;
			}
			else{
				d=20;
			}
		}
	}
	else{
			if(500>=p*q){
			d = 5;
		}
		else{
			if(1000>=p*q){
				d = 10;
			}
			else{
				d=5;
			}
		}
	}
	cout<<fixed<<setprecision(2);
	cout<<"Sum "<<q*p;
	cout<<"\nDiscount "<<q*p*d/100;
	cout<<"\nFinal amout "<<(p*q)-(p*q*d/100);
}
