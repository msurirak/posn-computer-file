#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int e;
	int o;
	int x;
	e=0;
	o=0;
	for(int i=1;i<=3;i++){
		cin>>x;
		if(x%2==0){
			e=e+1;
		}
		else{
			o=o+1;
		}
	}
	cout<<"even "<<e;
	cout<<"\nodd "<<o;				
}

