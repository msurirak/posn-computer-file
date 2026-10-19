#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	char x = 'x';
	int Ybox,Xbox,temp,french=0;
	cin>>Xbox>>x>>Ybox;
	char array[Xbox+2][Ybox+2];
	for(int j = 0;j <= Ybox+1;j++){
		for(int i = 1;i<=Xbox+1;i++){
			array[i][j]='0';
		}
	}
	for(int j = 1;j <= Ybox;j++){
		for(int i = 1;i<=Xbox;i++){
			cin>>array[i][j];
		}
	}
	bool p=false;
	for(int j = 1;j <=Ybox;j++){
		for(int i = 1;i<=Xbox;i++){
			p=false;
			if(array[i][j]=='1'){//connection check
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
				if(p==false){
					cout<<"0";
					return 0;
				}
				
				
				if(array[i-1][j]=='0'){french++;}
				if(array[i+1][j]=='0'){french++;}
				if(array[i][j+1]=='0'){french++;}
				if(array[i][j-1]=='0'){french++;}
			}
			
			
		}
	}
	cout<<french;
}
