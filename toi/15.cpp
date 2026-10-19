#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	float h;
	float b;
	float m;
	cin>>h;
	cin>>b;
	cout<<fixed<<setprecision(2);
	m = b/pow((h/100), 2);
	cout<<m;
	if(m<18.5){
		cout<<"\nUnderweight";
	}
	else{
		if(18.5<=m&&m<23.5){
			cout<<"\nNormally";
		}
		else{
			if(23.5<=m&&m<28.5){
				cout<<"\nOverweight";
			}
			else{
				if(28.5<=m&&m<35){
				cout<<"\nFat level I";
				}
				else{
					if(35<=m&&m<40){
						cout<<"\nFat level II";
					}
					else{
						cout<<"\nFattest";
					}
				}
			}
		}
	}
}
