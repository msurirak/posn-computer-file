#include<bits/stdc++.h>
using namespace std;
int main(){
    int width;
    cin>>width;
    int array[width][3];
    int total[width*3];
    for(int j=0;j<3;j++){
        for(int i=0;i<width;i++){
            cin>>array[i][j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<width;i++){
            total[(j*width)+i]=array[i][j];
        }
        cout<<"\n";
    }
    sort(total,total + (width*3));
    for(int j=0;j<3;j++){
        for(int i=0;i<width;i++){
            cout<<total[(j*width)+i]<<" ";
        }
    }
    int order;
    cout<<"\n";
	for(int j=0;j<3*width;j++ ){
		for(int i = 0;i<9;i++){
			if(total[j+i]==total[j+i+1]){
				cout<<total[j+i]<<" ";
			}
		}
	}
}
