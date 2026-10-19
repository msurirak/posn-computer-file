#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	string x;
	string y;
	string r;
	int odd,e,od;
	int k;
	cin>>x>>y;
	int i;
	e=0;
	if(x.size()!=y.size()){
		if(x.size()<y.size()){
			for(i=0;i<(x.size()-y.size());i++){
				x.push_back(x[i]);
			}
		}
		else{
			for(i=0;i<(y.size()-x.size());i++){
				y.push_back(y[i]);
			}
		}	
	}
	for(i=0;i<x.size();i++){
		if(y[i]=='l'||y[i]=='L'||y[i]=='o'||y[i]=='O'||y[i]=='v'||y[i]=='V'||y[i]=='e'||y[i]=='E'||x[i]=='l'||x[i]=='L'||x[i]=='o'||x[i]=='O'||x[i]=='v'||x[i]=='V'||x[i]=='e'||x[i]=='E'){
			r.push_back('w');
			odd++;
		}
		else{
			r.push_back('$');
		}
	}
	cout<<r;
	od=0;
	for(i=0;i<r.size();i++){
		if(r[i]=='w'){
			od=od+1;
			if(od>e){
				e=od;
			}
		}
		else{
			od=0;
		}
	}	
	if(odd%2!=0){
		cout<<e;	
	}
	else{
		if(e<=1){
			cout<<"#";
		}	
	}
	return 0;
}

