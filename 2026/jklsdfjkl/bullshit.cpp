#include <iostream>
#include <string>
using namespace std;
int main() {
	char x = 'x';
	int Ybox,Xbox,temp,french;
	cin>>Xbox>>x>>Ybox;
	char array[Xbox+2][Ybox+2];
	for(int j = 0;j < Ybox;j++){
		for(int i = 0;i<Xbox;i++){
			cin>>array[i][j];
			
		}
	}
	bool p=false;
	for(int j = 0;j < Ybox;j++){
		for(int i = 0;i<Xbox;i++){
			p=false;
			if(array[i][j]=='1'){
				if(array[i-1][j-1]=='1'){
					p=true;
				}
				if(array[i-1][j]=='1'){
					p=true;
				}
				if(array[i-1][j+1]=='1'){
					p=true;
				}
				
				if(array[i+1][j-1]=='1'){
					p=true;
				}
				if(array[i+1][j]=='1'){
					p=true;
				}
				if(array[i+1][j+1]=='1'){
					p=true;
				}
				
				if(array[i][j-1]=='1'){
					p=true;
				}
				if(array[i][j+1]=='1'){
					p=true;
				}
			}
		}
	}
}
