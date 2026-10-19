#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n,i,k,r;
	cin>>n;
	int t[n+2];
	t[0]=0;
	t[n+1]=0;
	for(i=1;i<n+1;i++){
		cin>>t[i];
		if(t[i-1]<t[i]&&t[i]>t[i+1]){
			cout<<i<<"ok\n";
			r++;
		}
	}
}
