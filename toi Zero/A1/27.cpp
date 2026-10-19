#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	char q;
	char w;
	char e;
	char r;
	char t;
	cin>>q>>w>>e>>r>>t;
	if(q<91){
		q=q+32;
	}
	if(w<91){
		w=w+32;
	}
	if(e<91){
		e=e+32;
	}
	if(r<91){
		r=r+32;
	}
	if(t<91){
		t=t+32;
	}
	cout<<t<<r<<e<<w<<q;
}
