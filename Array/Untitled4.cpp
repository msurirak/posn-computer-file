#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int k,l,i,o;
	cin>>k>>l;
	int box[k][l];
	for(i=0;i<k;i++){
		for(o=0;o<l;o++){
			cin>>box[i][o];
		}
	}
	for(i=0;i<k;i++){
		for(o=0;o<l;o++){
			cout<<box[i][o]<<" ";
		}
		cout<<"\n";
	}
}
