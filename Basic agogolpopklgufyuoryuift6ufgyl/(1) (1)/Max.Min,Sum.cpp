#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int min=2147483646,max=-2147483647,sum=0;
	int i,n,x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		sum=sum+x;
		if(min>x){
			min=x;
		}
		if(max<x){
			max=x;
		}
	}
	cout<<"Sum = "<<sum<<"\n";
	cout<<"Min = "<<min<<"\n";
	cout<<"Max = "<<max;
}
