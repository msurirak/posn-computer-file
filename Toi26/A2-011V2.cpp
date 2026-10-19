#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int G[1000]={};
	int x;
	for(int i=0;i<10;i++){
		cin>>x;
		if(G[x]==0){
			cout<<x<<" ";
			G[x]=1;
		}
	}
}
