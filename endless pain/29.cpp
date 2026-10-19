#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//29
	int m;
	int n;
	int o;
	cin>>m;
	cin>>n;
	cin>>o;
	for(int u=4;u>=1;u--){
		for(int i=1;i<=m;i++){
			cout<<"*";
		}
		for(int i=1;i<=n;i++){
			cout<<"-";
		}				
		for(int i=1;i<=o;i++){
			cout<<"+";
		}
		cout<<"\n";
	} 
}
