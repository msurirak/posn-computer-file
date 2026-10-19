#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	int i;
	int r;
	int n;
	int k;
	k=0;
	cin>>n;
	r=-2147483648;
	for(i=0;i<n;i++){
		cin>>x;
		if(r<x){
			r=x;
			k=0;
		}
		if(r==x){
			k++;
		}
	}
	cout<<r<<"\n"<<k;
}
