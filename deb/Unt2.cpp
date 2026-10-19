#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	int X;
	int Y;
	int n;
	cin>>n;
	for(int i=1;i<=n;i=i+1){
		int A;
		int B;
		cin>>A>>B;
		if(A>400){
			X = 1;
		}
		else{
			X = 0;
		}
		if(B>200){
			Y = 1;
		}
		else{
			if(B<150){
				Y = 2;
			}
			else{
				Y = 0;
			}
		}
	}
	cout<<i;	
	cout<<X;
	cout<<Y;				
}

