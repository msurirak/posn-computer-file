#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int n,num;
	cin>>n;
	int box[123546]={0};
	for(int i=1;i<=n;i++){
		cin>>num;
		box[num]+=1;
	}
	for(int i=0;i<=123456;i++){
		if(box[i]!=0){
			cout<<i<<":"<<box[i]<<"\n";
		}
	}
}
