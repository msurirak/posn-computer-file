#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
	double c;
	double f;
	cin>>f;
	c = (f-32)*5/9;
	cout<<fixed<<setprecision(8); 
	cout<<c;
}

