#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int amount,out;
	string array;
	int count[256]={0};
	cin>>array;
	for(int i = 0;i<array.size();i++){
		count[array[i]]++;
	}
	cout<<"output:\n";
	for(int i=0;i<256;i++){
		if(count[i]!=0){
			cout<<"("<<char(i)<<"): "<<count[i]<<"\n";
		}
	}
}
