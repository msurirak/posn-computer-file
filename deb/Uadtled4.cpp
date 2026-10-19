#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int X=0;
	int n;
	cin>>n;
	int p;
	for(int i=1;i<=n;i=i+1)
	{
		cin>>p;
		if(p%5==1||p%5==4){
			X = X+1;
		}	
	}
	cout<<X;
}
