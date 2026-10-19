#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n,l,i,k;
	cin>>l>>n;
	k=0;
	for(i=1;i<=l;i++){
		if(n>=pow(i,2)){
			n=n-pow(i,2);
			k++;
		}
	}
	cout<<l-k;
}
