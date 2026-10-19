#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(void){
	int x;
	int y;
	int z;
	cin>>x;
	cin>>y;
	cin>>z;
	if(x==y&&z==y&&x==z){
		cout<<"all the same";
	}
	else{
		if(x!=y&&z!=y&&x!=z){
			cout<<"all different";
		}
		else{
			cout<<"neither";
		}	
	}
}
