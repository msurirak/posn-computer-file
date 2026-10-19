#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int a;
	char t;
	cin>>a;
	cin>>t;
	if(a<=18||t=='s'||t=='S'){
		cout<<"20";
	}
	else{
		cout<<"50";
	}
}
