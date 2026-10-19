#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	long long x,n,k,i,m;
	cin>>n>>k;
	long long box[n];
	x=2000000000;
	for(i=0;i<n;i++){
		cin>>box[i];
		if(box[i]<x){
			x=box[i];
		}
	}
	m=0;
	for(i=0;i<n;i++){
		if(x*k<=box[i]*(k-1)){
			m++;
		}
	}
	cout<<n-m;
}
