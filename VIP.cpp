#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x;
	int i;
	int r;
	int n;
	cin>>n;
	r=0;
	for(i=0;i<n;i++){
		cin>>x;
		r=r+x;
	}
	cout<<r;
}
