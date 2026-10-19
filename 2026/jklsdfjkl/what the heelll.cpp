#include <iostream>
using namespace std;
int main() {
	string in;
	cin>>in;
	bool type[12]={false};
	int temp=0,array[in.size()],money;
	cin>>money;
	for(int i = 0;i<in.size();i++){
		array[i]=in[i]-48;
	}
	for(int i = in.size()-1;i>=0;i--){
		if(array[i]!=0){
			if(temp==2){
				type[array[i]]=true;
			}
			else if(temp==3){
				type[10]=true;
			}
			temp=0;
		}
		else{
			temp++;
		}
	}
	for(int i = 10;i>=1;i--){
		if(type[i]==true){
			temp=money;
			temp=temp-temp%(i*100);
			if(temp/(i*100)!=0){
				cout<<"B"<<i<<"00: ";
				cout<<temp/(i*100)<<endl;
			}
			money=money-temp;
		}
	}
}
