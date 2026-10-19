#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int amount,temp;
	cin>>amount;
	int array[200]={0};
	for(int i = 0;i<amount;i++){
		cin>>temp;
		array[temp+100]++;
	}
	cout<<"output:\n";
	for(int i=0;i<200;i++){
		if(array[i]!=0){
			cout<<"("<<i-100<<"): "<<array[i]<<"\n";
		}
	}
}
