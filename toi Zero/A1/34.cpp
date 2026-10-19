#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n;
	int x;
	int y;
	int i;
	cin>>n;
	cin>>y;
	for(i=1;i<n;i++){
		cin>>x;
		if(y<x){
			x=y;
		}
		else{
			y=x;
		}
	}
	cout<<y;
}
