#include <iostream>
#include <algorithm>
using namespace std;
int main() { 
	int k,sum=0;
	for (int i=10;i>=2;i--){
		cin>>k;
		sum+=k*i;
	}
	if(11-(sum%11)==11){
		cout<<"0";
	}
	else{
		cout<<11-(sum%11);
	}
}
