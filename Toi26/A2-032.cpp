#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int x,i,k,m,n,ver,hoz,xver,xhoz,posver,poshoz,p,o=0,ik,kk;
	cin>>ver>>hoz;
	int array[ver+2][hoz+2];
	for(i=0;i<ver+2;i++){
		for(k=0;k<hoz+2;k++){
			array[i][k]=0;
		}
	}
	cin>>x;
	for(m=0;m<x;m++){
		cin>>xver>>xhoz;
		array[xver+1][xhoz+1]++;
	}
	
	for(i=1;i<ver+1;i++){
		for(k=1;k<hoz+1;k++){
			if(array[i][k]==0){
				p=0;					
				for(m=-1;m<=1;m++){
					for(n=-1;n<=1;n++){
						p=p+array[i+m][k+n];
					}
				}
				if(p>o){
					o=p;
				}
			}
		}
	}
	cout<<o;
}
