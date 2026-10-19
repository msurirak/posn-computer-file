#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	int o,p,m,k,i,col,row,n,bcol,brow;
	cin>>row>>col;
	cin>>brow>>bcol;
	cin>>n;
	int box[row+12][col+12];
	int vir[n][30];
	for(i=0;i<row+2;i++){
		for(k=0;k<col+2;k++){
			box[i][k]=0;
		}
	}
	for(m=0;m<n;m++){
		cin>>o>>p;
		o=o+1;
		p=p+1;
		vir[m][1]=o;
		vir[m][2]=p;
 	}
	for(m=0;m<n;m++){
		for(k=0;k<5;k++){
			for(i=0;i<5;i++){
				box[i+(vir[m][1]-2)][k+(vir[m][2]-2)]=20;
			}
		}
	}
	for(m=0;m<n;m++){
		for(k=0;k<3;k++){
			for(i=0;i<3;i++){
				box[i+(vir[m][1]-1)][k+(vir[m][2]-1)]=60;
			}
		}
	}	
	for(m=0;m<n;m++){
		box[vir[m][1]][vir[m][2]]=100;
	}
	int c=0;
	for(i=1;i<row+1;i++){
		for(k=1;k<col+1;k++){
			if(box[i][k]==0){
				c++;
			}
		}
	}
	cout<<c<<"\n";
	cout<<box[brow+1][bcol+1]<<"%";
}
