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
			if(array[i][j]=='1'){
				for(int x=-1;x<=1;i++){
					for(int y=-1;y<=1;y++){
						if(array[i+x][j+y]=='1'){
							p=true;
						}
					}
				}
				if(p==false){
					cout<<"0";
					return 0;
				}
			}
		}
	}
}
