#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long temp,n,sum=1,moder=1e10+19;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		while (temp%2==0){
			temp=temp/2;
		}
		sum = (sum * temp)%moder;
	}
	cout<<sum;
}
