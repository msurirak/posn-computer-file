#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x>1500){
		if(x%400==0){
			cout<<"yes";
		}
		else{
			if(x%100==0){
				cout<<"no";
			}
			else{
				if(x%4==0){
					cout<<"yes";
				}
				else{
					cout<<"no";
				}
			}
		}	
	}
	else{
		if(x%4==0){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
	}
}
