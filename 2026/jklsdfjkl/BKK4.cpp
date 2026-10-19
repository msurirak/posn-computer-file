#include <iostream>
using namespace std;
int main() {
	int mpos[8],i=0,radio,count=0;
	bool uu[5];
	string temp;
	cin>>temp;
	cin>>radio;
	if(temp.size()==4){
		mpos[i*2]=(temp[1]-48)*-1;
		mpos[i*2+1]=(temp[3]-48)*-1;
	}
	else if(temp.size()==3){
		if(temp[0]=='-'){
			mpos[i*2]=(temp[1]-48)*-1;
			mpos[i*2+1]=temp[2]-48;
		}
		else if(temp[1]=='-'){
			mpos[i*2]=temp[0]-48;
			mpos[i*2+1]=(temp[2]-48)*-1;
		}
	}
	else if(temp.size()==2){
		mpos[i*2]=temp[0]-48;
		mpos[i*2+1]=temp[1]-48;
	}
	
	for(int i = 1;i<=3;i++){//input
		cin>>temp;
		if(temp.size()==4){
			mpos[i*2]=(temp[1]-48)*-1;
			mpos[i*2+1]=(temp[3]-48)*-1;
		}
		else if(temp.size()==3){
			if(temp[0]=='-'){
				mpos[i*2]=(temp[1]-48)*-1;
				mpos[i*2+1]=temp[2]-48;
			}
			else if(temp[1]=='-'){
				mpos[i*2]=temp[0]-48;
				mpos[i*2+1]=(temp[2]-48)*-1;
			}
		}
		else if(temp.size()==2){
			mpos[i*2]=temp[0]-48;
			mpos[i*2+1]=temp[1]-48;
		}
	}
	int above,below,left,right;
	i=1;
	for(i=1;i<=3;i++){
		if(mpos[0]>mpos[i*2]){		
			above=mpos[0];
			below=mpos[i*2];
		}
		else{
			below=mpos[0];
			above=mpos[i*2];
		}
		left=above-below;
		if(mpos[1]>mpos[i*2+1]){		
			above=mpos[1];
			below=mpos[i*2+1];
		}
		else{
			below=mpos[1];
			above=mpos[i*2+1];
		}
		right=above-below;
		
		if(radio*radio>=(left*left)+(right*right)){
			uu[i]=true;
		}
		else{
			uu[i]=false;
		}
	}
	
	
	
	cout<<"YES ";
	for(i = 1;i<=3;i++){
		if(uu[i]==true){
			cout<<"("<<mpos[i*2]<<","<<mpos[i*2+1]<<") ";
		}
	}
	cout<<"\nNO ";
	for(i = 1;i<=3;i++){
		if(uu[i]==false){
			cout<<"("<<mpos[i*2]<<","<<mpos[i*2+1]<<") ";
		}
	}
}
