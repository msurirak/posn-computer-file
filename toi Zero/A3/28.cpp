#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x,y,v,i,m,n,j,p;
	cin>>y>>x;
	cin>>v;
	char nuke[y+2][x+2];
	int ans[y+2][x+2];
	for(i=1;i<=v;i++){
		cin>>m>>n;
		nuke[m+1][n+1]='x';
	}
	for(j=1;j<=y;j++){
		for(i=1;i<=x;i++){
			p=0;
			if(nuke[j][i]!='x'){
				if(nuke[j-1][i-1]=='x'){
					p++;
				}
				if(nuke[j][i-1]=='x'){
					p++;
				}
				if(nuke[j+1][i-1]=='x'){
					p++;
				}
				if(nuke[j-1][i]=='x'){
					p++;
				}
				if(nuke[j+1][i]=='x'){
					p++;
				}
				if(nuke[j-1][i+1]=='x'){
					p++;
				}
				if(nuke[j][i+1]=='x'){
					p++;
				}
				if(nuke[j+1][i+1]=='x'){
					p++;
				}
			}
			ans[j][i]=p;
		}	
	}	
	for(i=1;i<=y;i++){
		for(j=1;j<=x;j++){
			if(nuke[i][j]=='x'){
				cout<<"x"<<" ";
			}
			else{
				cout<<ans[i][j]<<" ";
			}
		}
		cout<<"\n";
	}
}
