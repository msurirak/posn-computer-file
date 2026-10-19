#include <iostream>
#include <algorithm>
using namespace std;
int main() { 
	int n,temp;
	cin>>n;
	int array[n][n];
	for(int j=0;j<n;j++){
		array[j][j]=0;
	}
	for(int j=0;j<n;j++){
		for(int i = 0;i<j;i++){
			cin>>temp;
			array[i][j]=temp;
			array[j][i]=temp;
		}
	}
	for(int j=0;j<n;j++){
		for(int i = 0;i<n;i++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}
