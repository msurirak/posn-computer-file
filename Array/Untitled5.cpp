#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int l,k,i,o;
	cin>>k>>l;
	int a[k][l],b[k][l];
	for(i=0;i<k;i++){
		for(o=0;o<l;o++){
			cin>>b[i][o];
		}
	}
	for(i=0;i<k;i++){
		for(o=0;o<l;o++){
			cin>>a[i][o];
		}
    }
    for(i=0;i<k;i++){
		for(o=0;o<l;o++){
			cout<<a[i][o]+b[i][o]<<" ";
		}
		cout<<"\n";
	}
}
