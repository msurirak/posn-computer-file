#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,n,m,line,locate;
	cin>>n;
	char x[n],y[n],c;
	int output=n;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	for(i=0;i<n;i++){
		cin>>y[i];
	}
	cin>>m;
	for(i=0;i<m;i++){
		cin>>line>>locate>>c;
		if(line==1){
			x[locate]=c;
		}
		else{
			y[locate]=c;
		}
	}
	for(i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	cout<<"\n";
	for(i=0;i<n;i++){
		cout<<y[i]<<" ";
	}
	for(i=0;i<n;i++){
		if(x[i]=='A'&&y[i]=='T'){
			output=output-1;
		}
		if(x[i]=='T'&&y[i]=='A'){
			output=output-1;
		}
		if(x[i]=='G'&&y[i]=='C'){
			output=output-1;
		}
		if(x[i]=='C'&&y[i]=='G'){
			output=output-1;
		}
	}
	cout<<"\n"<<output;
}
