#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int k;
	cin>>k;
	int a[k],b[k],i;
	for(i=0;i<k;i++){
		cin>>a[i];
	}
	for(i=0;i<k;i++){
		cin>>b[i];
	}
	for(i=0;i<k;i++){
		cout<<a[i]+b[i]<<" ";
	}
}
