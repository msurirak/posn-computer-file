#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n,s,k,i,r,t;
	cin>>n>>s;
	r=0;
	t=0;
	for(i=0;i<n;i++){
		cin>>k;
		if(k%12==0){
				r=r+(k/4)*2*5;
				t=t+(k/3)*2*5;	
		}
		else{
			if(k%3==0){
				r=r+(k/3)*2*5;
				t=t+(k/3)*2*5;	
			}
			if(k%4==0){
				r=r+(k/4)*2*5;
				t=t+(k/4)*2*5;
			}
		}
	}
	t=s-t;
	r=s-r;
	cout<<t<<" "<<r;	
}
