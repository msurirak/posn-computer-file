#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int r,n,m,i,w,l,wa,la;
	r=5000000;
	cin>>w>>l>>n>>m;
	w=w-wa;
	for(i=n;i<=m;i++){
		wa=w%i;
		la=l%i;
		if(r>wa*la){
			r=wa*la;
		}
	}
	cout<<r;
}
