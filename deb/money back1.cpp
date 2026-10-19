#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	int q;
	int t;
	cin>>x;
	q=x/10;
	t=x%10;
	cout<<"10 buck ="<<q;
	q=t/5;
	t=t%5;
	cout<<"\n5  buck ="<<q;
	q=t/2;
	t=t%2;
	cout<<"\n2  buck ="<<q;
	cout<<"\n1  buck ="<<t;
}
