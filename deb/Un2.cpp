#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m;
	int n;
	cin>>n>>m;
	int cnt = -1;
	for(int i=1;i<=n;i=i+1){
		cnt = cnt+1;
		if(cnt%m==0){
			cout<<cnt<<" ";
		}
		else{
			cout<<"# ";
		}
	}			
}

