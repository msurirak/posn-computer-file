#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int i,x,ans;
	string q;
	ans=0;
	cin>>q;
	for(i=q.size();i>0;i--){
		if(q[q.size()-i]=='1'){
			ans=ans+(pow(2,i-1));
		}
	}
	
	cout<<ans;
}
