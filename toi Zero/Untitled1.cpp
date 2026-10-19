#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int rat;
	int monk;
	int frog;
	int rats;
	int monks; 
	int frogs;
	int l,p;
	int d,u;
	int i;
	cin>>l>>p;
	cin>>rats>>monks>>frogs;
	for(i=0;i<p;i++){
		cin>>d>>u;
		if(d%rats==0){
			rat=rat+u;
		}
		if(d%monks==0){
			monk=monk+u;
		}
		if(d%frogs==0){
			frog=frog+u;
		}
		if(l%frogs==l||l%monks==l||l%frogs==l){
			i=21000000;	
		}
	}
	if(rat<=monk){
		if(rat==monk){
			if(rat==monk&&rat==frog){
				cout<<"Rabbit"<<rat<<"\nMonkey"<<monk<<"\nFrog"<<frog;
			}
			else{
				cout<<"Rabbit"<<rat<<"\nMonkey"<<monk;
			}
		}
	}
	else{
		if(rat<=frog){
			
		}
	}
}
