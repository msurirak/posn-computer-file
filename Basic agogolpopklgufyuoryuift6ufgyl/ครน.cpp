	#include <iostream>
	#include <iomanip>
	#include <cmath>
	#include <string>
	using namespace std;
	int main(){
	int min,n,x,y,i;
	cin>>x>>y;
	if(x<y){
		min=x;	
	}
	else{
		min=y;
	}
	n=0;
	for(i=1;i<=min;i++){
		if(x%i==0&&y%i==0){
			n=i;	
		}
	}
	cout<<n;
}
