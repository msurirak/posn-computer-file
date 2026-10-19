#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string x;
	cin>>x;
	int a;
	a=0;
	if(x[0]=='a'||x[0]=='e'||x[0]=='i'||x[0]=='o'||x[0]=='u'){
		a=a+1;
	}
	if(x[1]=='a'||x[1]=='e'||x[1]=='i'||x[1]=='o'||x[1]=='u'){
		a=a+1;
	}
	if(x[2]=='a'||x[2]=='e'||x[2]=='i'||x[2]=='o'||x[2]=='u'){
		a=a+1;
	}
	cout<<a;
}
