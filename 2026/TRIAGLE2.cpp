#include<bits/stdc++.h>
using namespace std;
int main(){
    int width;
    cin>>width;
    int array[width][3];
    for(int j=0;j<3;j++){
        for(int i=0;i<width;i++){
            cin>>array[i][j];
        }
    }
    for(int i=2;i<width-2;i++){//normal
	    if(array[i][0]==array[i][1]-2&&array[i][1]+4==array[i][2]){
	    	cout<<array[i][0]<<"\n";
	    	cout<<array[i-1][1]<<" "<<array[i][1]<<" "<<array[i+1][1]<<"\n";
	    	cout<<array[i-2][2]<<" "<<array[i-1][2]<<" "<<array[i][2]<<" "<<array[i+1][2]<<" "<<array[i+2][2]<<"\n";
		}
    }
    for(int i=2;i<width-2;i++){//reverse
	    if(array[i][0]-4==array[i][1]&&array[i][1]-2==array[i][2]){
	    	cout<<array[i-2][0]<<" "<<array[i-1][0]<<" "<<array[i][0]<<" "<<array[i+1][0]<<" "<<array[i+2][0]<<"\n";
	    	cout<<"  "<<array[i-1][1]<<" "<<array[i][1]<<" "<<array[i+1][1]<<"\n";
	    	cout<<"  "<<"  "<<array[i][2]<<"\n";
		}
    }
}
