#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(void){
	int q;
	int w;
	int e;
	int a;
	int s;
	int d;
	cin>>q;
	cin>>w;
	cin>>e;
	cin>>a;
	cin>>s;
	cin>>d;
	if(q==a){
		if(w==s){
			if(e==d){
				cout<<"0";
			}
			else{
				if(e>d){
					cout<<"2";
				}
				else{
					cout<<"1";
				}
			}
		}
		else{
			if(w>s){
				cout<<"2";
			}
			else{
				cout<<"1";
			}
		}
	}
	else{
		if(q>a){
			cout<<"2";
		}
		else{
			cout<<"1";
		}
	}
}
