#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string y,ya;
	char x,xa;
	cin>>xa>>ya;
	cin>>x>>y;
	if(y[4]==ya[4]&&y[3]==ya[3]){
		if(y[5]==ya[5]&&y[4]==ya[4]&&y[3]==ya[3]){
			if(y==ya&&x==xa){
				cout<<1000000;
			}
			else{
				if(y==ya){
					cout<<100000;
				}
				else{
				 	if(x==xa){
						cout<<"2000";
					}
					else{
						cout<<"200";
					}	
				}
			}
		}
		else{
			if(x==xa){
				cout<<"1000";
			}
			else{
				cout<<"100";
			}
		}
	}
	else{
		cout<<"0";
	}
}
