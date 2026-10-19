#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
	int z;
	int x;
	int c;
	cin>>z;
	cin>>x;
	cin>>c;
	if(z>x){
		if(z>c){
			cout<<z;
		}
		else{
			cout<<c;
		}
	}else{
		if(x>c){
			cout<<x;
		}
		else{
			cout<<c;
		}
	}
}
