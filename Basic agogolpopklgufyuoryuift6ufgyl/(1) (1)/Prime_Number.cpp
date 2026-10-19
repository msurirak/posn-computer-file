	#include <iostream>
	#include <iomanip>
	#include <cmath>
	#include <string>
	using namespace std;
	int main(){
	int i,n;
	string k;
	cin>>n;
	for(i=2;i<n-1;i++){
		if(n%i==0){
			cout<<"Not Prime";
			return 0;
		}
	}
	cout<<"Prime";
}
