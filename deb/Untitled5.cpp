#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	int X=0;
	int Y;
	int A;
	int B;
	int n;
	cin>>n;
	for(int i=1;i<=n;i=i+1){
		cin>>A>>B;
		if(A<=400&&150<=B&&B<=200){
			X =X+1;
		}
	}
	cout<<X;			
}

