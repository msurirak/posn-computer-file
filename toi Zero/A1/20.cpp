#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	int y;
	int z;
	cin>>x;
	cin>>y;
	cin>>z;
	if(x<y&&y<z){
		cout<<"increasing";
	}
	else{
		if(x>y&&y>z){
			cout<<"decreasing";
		}
		else{
			cout<<"neither";
		}
	}
}
