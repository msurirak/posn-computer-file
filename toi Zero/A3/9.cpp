#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int h,i,n,a,k,r;
	cin>>n>>a;
	int pod[a];
	for(i=0;i<=a;i++){
		pod[i]=0;
	}
	for(i=0;i<n;i++){
		cin>>h;
		for(k=0;k<=a;k++){
			if(h==k){
				pod[k]=pod[k]+1;
			}
		}
	}
	h=2147483647;
	for(i=1;i<=a;i++){
		n=pod[i];
		if(h>n){
			h=n;
		}
	}
	r=0;
	for(i=1;i<=a;i++){
		r=r+pod[i];
	}
	cout<<r-(h*a);
}
