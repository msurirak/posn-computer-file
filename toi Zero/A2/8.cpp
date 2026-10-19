#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
	int n;
	cin>>n;
	int p,e[n];
	for(int i=0;i<n;i++){
		cin>>p>>e[i];
	}
	int i,k,m=0;
	for(i=0;i<n;i++){
		for(k=i;k<n;k++){
			if(e[i]<e[k]){
				m++;
				k=1000000000;
			}		
		}
	}
	cout<<m;
}
