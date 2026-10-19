#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i;
	int p;
	int u;
	cin>>u;
	u=u-(u%10);
	p=u/10;
	for(i=0;i<=p;i++){
		cout<<u<<" ";
		u=u-10;
	}
}
