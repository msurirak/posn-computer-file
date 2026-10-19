#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n;
	int u;
	int k;
	int x;
	int i;
	cin>>n;
	u=0;
	for(i=1;i<=n;i++){
		k=pow(i,2);
		u=k+u;
	}
	cout<<u;
}
