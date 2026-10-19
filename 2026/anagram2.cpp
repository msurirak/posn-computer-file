#include <iostream>
using namespace std;
int main() {
	int count1[80]={0},count2[80]={0},sum,real=0;
	string str1,str2;
	cin>>str1>>str2;
	for(int i =0;i<str1.size();i++){
		count1[str1[i]]++;
	}
	for(int i =0;i<str2.size();i++){
		count2[str2[i]]++;
	}
	
	for(int i=65;i<=72;i++){
		cout<<count1[i]<<" ";
	}
	cout<<"\n";
	for(int i=65;i<=72;i++){
		cout<<count2[i]<<" ";
	}
	cout<<"\n";
	for(int i=65;i<=72;i++){
		sum=count1[i]-count2[i];
		if(sum<0){
			sum=sum*-1;
		}
		cout<<sum<<" ";
		if(sum!=0){
			real++;
		}
	}
	if(real<=3){
		cout<<"\nanagram";
	}
	else { 
		cout<<"\nno";
	}
}
