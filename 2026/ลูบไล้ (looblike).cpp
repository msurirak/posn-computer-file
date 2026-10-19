#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int amount,like[10000]={},line,max={},num[10000];
	cin>>amount;
	for(int i=0;i<amount;i++){
		cin>>line;
		like[line]++;
	}
	for(int i= 0;i<10000;i++){
		if(like[i]!=0){
			if(max<like[i]){max=like[i];}
		}
	}
	for(int i= 0;i<10000;i++){
		if(like[i]==max){
			cout<<i<<" ";
		}
	}
}
