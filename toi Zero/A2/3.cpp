#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n,x,c,i;
	cin>>n;
	int lox[n+3];
	for(i=0;i<=n+1;i++){
		lox[i]=0;
	}
	for(i=1;i<=n;i++){
		cin>>lox[i];
	}
	x=0;
	for(i=1;i<=n;i++){
		if(lox[i]>lox[i-1]&&lox[i]>lox[i+1]){
			x=x+1;
		}
	}
	cout<<x;
}
