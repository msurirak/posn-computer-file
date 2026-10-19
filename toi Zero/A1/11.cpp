#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string cha;
	char r;
	int i;
	int k;
	int count;
	cin>>cha;
/*	count=0;
	r=cha[0];
	for(i=0;i<cha.size();i++){
		if(cha[i]==r){
			count=count+1;
			cha[i]='*';
		}
	}
	cout<<count<<r<<"\n"<<cha<<"\n";
	//////////
	count=0;
	r=cha[1];
	for(i=0;i<cha.size();i++){
		if(cha[i]==r){
			count=count+1;
			cha[i]='*';
		}
	}
	cout<<count<<r<<"\n"<<cha<<"\n"; 
*/
	for(k=0;k<cha.size();k++){
		if(cha[k]!='*'){
			count=0;
			r=cha[k];
			for(i=0;i<cha.size();i++){
				if(cha[i]==r){
					count=count+1;
					cha[i]='*';
				}	
			}
			cout<<count<<r; 	
		}
	}
}
