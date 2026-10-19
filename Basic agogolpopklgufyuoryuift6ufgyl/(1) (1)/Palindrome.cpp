#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string k;
	cin>>k;
	for(int i=0;i<k.length()/2;i++){
		if(k[i]!=k[k.size()-i-1]){
			cout<<"Not Palindrome";
			return 0;
		}
	}
	cout<<"Palindrome";
}
