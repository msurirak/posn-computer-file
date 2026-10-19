#include <iostream>
using namespace std;
int main() {
	string in;
	cin>>in;
	bool type[12]={false};
	int temp=0,array[in.size()],count;
	for(int i = 0;i<in.size();i++){
		array[i]=in[i]-48;
	}
	for(int i = in.size()-1;i>=0;i--){
		cout<<"temp:"<<temp<<" "<<array[i]<<endl;
		if(array[i]!=0){
			cout<<"yeah";
			if(temp==2){
				type[array[i-2]]=true;
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
	for(int i = 1;i<=10;i++){
		if(type[i]==true){
			cout<<"B"<<i<<"00:"<< endl;
		}
	}
	
}
