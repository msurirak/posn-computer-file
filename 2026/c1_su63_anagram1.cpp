#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string string;
	cin>>string;
	int array[75]={};
	for(int i=0;i<string.size();i++){
		array[string[i]]+=1;
	}
	for(int i=65;i<=72;i++){
		cout<<array[i]<<" ";
	}
}
