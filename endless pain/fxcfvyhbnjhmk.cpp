#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int p;
	cin>>p;
	if(p%2==0){
		for(int u=2;u<=p*2;u=u+2){
			cout<<u<<" ";
		} 
	}
	else{
		for(int u=1;u<=(p*2)-1;u=u+2){
			cout<<u<<" ";
		
		}
	}
}
