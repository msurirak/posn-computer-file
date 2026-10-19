#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i;
	int n;
	int u;
	char r;
	cin>>n;
	u=0;
	for(i=1;i<=n;i++){
		cin>>r;
		if(r=='A'||r=='E'||r=='I'||r=='O'||r=='U'){
			u=u+1;	
		}
	}
	cout<<u;
}
