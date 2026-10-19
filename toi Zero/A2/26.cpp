#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string name;
	string m;
	int w;
	int i;
	int r;
	int n;
	int ow;
	cin>>n;
	ow=0;
	r=-2147483648;
	for(i=0;i<n;i++){
		cin>>m>>w;
		if(r<w){
			r=w;
			name=m;
		}
		if(w>15){
			ow++;
		}
	}
	cout<<ow<<"\n"<<name<<" "<<r;
}

