#include <string>
#include <iostream>
using namespace std;
int main() { 
	int h,w;
	bool down=true;
	cin>>h>>w;
	char array[h][w];
	int i,j,pos=1;
	for(i=0;i<w;i++){
		for(j=0;j<h;j++){
			array[j][i]='.';
		}
	}
	cout<<((((h-2)*2)-1)*1)<<" limit\n";
	for(j=0;j<w;j++){
		//if(down==true){
			for(i=0;i<h;i++){//++
				if(i==j){
					array[i][j]='X';
					cout<<i<<" "<<j<<"\n";
				}
			}
		//}
		pos++;
		//if(down==false){
			for(i=h-1;i>=0;i--){
				if(i+((((h-2)*2)-1)*1)==j){
					array[h-i-2][j]='X';
					cout<<i<<" "<<j<<"\n";
				}
			}
		//}
	}
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			cout<<array[i][j];
		}
		cout<<"\n";
	}
}
