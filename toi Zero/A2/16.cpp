#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	char a;
	string x;
	cin>>a>>x;
	char b;
	string y;
	cin>>b>>y;
	if(x==y){
		if(a==b){
			cout<<"1000000";
		}
		else{
			cout<<"100000";
		}
	}
	else{
		if(x[2]==y[2]&&x[3]==y[3]&&x[4]==y[4]){
			if(a==b){
				cout<<"2000";
			}
			if(a!=b){
				cout<<"200";
			}
		}
		else{
			if(x[3]==y[3]&&x[4]==y[4]){
				if(a==b){
					cout<<"1000";
				}
				if(a!=b){
					cout<<"100";
				}
			}
			else{
				if(a==b){
					cout<<"20";
				}
			}	
		}
	}
	if(x!=y&&b!=a){
		cout<<"0";
	}
/*	if(b==a){
		cout<<"h";
	}*/
	return 0;
}
