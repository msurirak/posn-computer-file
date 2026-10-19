#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i,n,m;
	cin>>n;
	int x[n];
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	cin>>m;
	for(i=0;i<n;i++){
		if(m==x[i]){
			cout<<"Found at index "<<i;
			return 0;
		}
	}
	cout<<"Not Found";
}
