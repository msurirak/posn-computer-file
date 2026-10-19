#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void){
	int q;
	int w;
	int e;
	cin>>q;
	cin>>w;
	cin>>e;
	if(q<w){
		if(q<e){
			cout<<q;
		}
		else{
			cout<<e;
		}
	}
	else{
		if(w<e){
			cout<<w;
		}
		else{
			cout<<e;
		}
	}
}
