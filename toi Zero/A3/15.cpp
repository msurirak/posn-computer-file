#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int e,r,n,i,k,m,in;
	r=0;
	e=0;
	k=502;
	cin>>n;
	int y[n];
	int x[n];
	for(i=0;i<n;i++){
		cin>>y[i];
	}
	for(m=0;m<n;m++){
		k = 501;
		in = -1;
		for(i=0;i<n;i++){
			if(y[i]<k&&y[i]!=0){
				k=y[i];
				in = i;
			}
		}
		e=e+k;
		r=r+(e*2);
		y[in]=502;
	}
	cout<<r;
	return 0;
}
