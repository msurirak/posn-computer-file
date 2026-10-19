#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int k;
	cin>>k;
	int box[k],i;
	for(i=0;i<k;i++){
		cin>>box[i];
	}
	for(i=0;i<k;i++){
		cout<<box[i]<<" ";
	}
}
