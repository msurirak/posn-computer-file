#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i,n,m;
	cin>>n;
	int l=0,r=n-1;
	int x[n];
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	int mid;
	cin>>m;
	while(l<r){ 
		mid=(l+r)/2;
		cout<<x[mid]<<"\n";
		if(x[mid]==m){
			cout<<"Found at index "<<mid;
			return 0;
		}
		else if(x[mid]>m){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout<<"Not Found";
}
