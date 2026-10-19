#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int c=-1;
	int i,d,bd;
	int rabbit,monkey,frog;
	int prabbit=0,pmonkey=0,pfrog=0;
	cin>>d>>bd;
	cin>>rabbit>>monkey>>frog;
	if(c<frog){
		c=frog;
	}
	if(c<monkey){
		c=monkey;
	}
	if(c<rabbit){
		c=rabbit;
	}
	int x,p;
	for(i=0;i<bd;i++){
		cin>>x>>p;
		if(x%rabbit==0){
			prabbit=prabbit+p;
		}
		if(x%monkey==0){
			pmonkey=pmonkey+p;
		}
		if(x%frog==0){
			pfrog=pfrog+p;
		}
	}
	//cout<<prabbit<<"\n"<<pmonkey<<"\n"<<pfrog;
	if(prabbit==pmonkey&&pmonkey==pfrog){
		cout<<"Rabbit "<<prabbit<<"\n";
		cout<<"Monkey "<<pmonkey<<"\n";
		cout<<"Frog "<<pfrog;
	}
	else{
		if(prabbit==pmonkey||prabbit==pfrog||pmonkey==pfrog){
			if(prabbit==pmonkey){
				cout<<"Rabbit "<<prabbit<<"\n";
				cout<<"Monkey "<<pmonkey;
			}
			if(prabbit==pfrog){
				cout<<"Rabbit "<<prabbit<<"\n";
				cout<<"Frog "<<pfrog;
			}
			if(pfrog==pmonkey){
				cout<<"Monkey "<<pmonkey<<"\n";
				cout<<"Frog "<<pfrog;
			}
		}
		else{
			x=0;
			string b;
			if(pfrog>x){
				x=pfrog;
				b="Frog ";
			}
			if(pmonkey>x){
				x=pmonkey;
				b="Monkey ";
			}
			if(prabbit>x){
				x=prabbit;
				b="Rabbit ";
		}
			cout<<b<<x;
		}
	}
}
