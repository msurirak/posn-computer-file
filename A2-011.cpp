#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i,k,m[9];
	for(i=0;i<10;i++){
		cin>>m[i];
	}
	for(i=10;i>0;i--){
		for(k=0;k<10;k++){
			if(m[i]==m[k]&&i!=k){
				m[i]=-3;
			}
		}
	}
	for(i=0;i<10;i++){
		if(m[i]!=-3){
			cout<<m[i]<<" ";
		}
	}
}
