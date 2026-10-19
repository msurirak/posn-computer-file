#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i,k,row,col,o;
	cin>>col>>row;
	char x[col][row];
	char y[col][row];
	char r[col][row];
	for(i=0;i<col;i++){
		for(k=0;k<row;k++){
			cin>>x[i][k];
		}
	}
	for(i=0;i<col;i++){
		for(k=0;k<row;k++){
			cin>>y[i][k];
		}
	}
	for(i=0;i<col;i++){
		for(k=0;k<row;k++){
			if(y[i][k]=='-'){
				if(x[i][k]=='-'){	
					r[i][k]='-';
				}
				if(x[i][k]=='+'){
					r[i][k]='+';	
				}
				if(x[i][k]=='x'){
					r[i][k]='x';
				}
			}
			if(y[i][k]=='+'){
				if(x[i][k]=='-'){
					r[i][k]='+';
				}
				if(x[i][k]=='x'){
					r[i][k]='*';
				}
			}
			if(y[i][k]=='x'){
				if(x[i][k]=='-'){
					r[i][k]='x';
				}
				if(x[i][k]=='+'){
					r[i][k]='*';
				}
			}
		}
	}
	for(i=0;i<col;i++){
		for(k=0;k<row;k++){
			cout<<r[i][k];
		}
		cout<<"\n";
	}
}
