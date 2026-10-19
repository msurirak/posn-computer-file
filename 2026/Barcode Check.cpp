#include <iostream>
using namespace std;
int main() {
	string id;
	cin>>id;
	int evenSum=0,oddSum=0,total;
	for(int i = 0;i<=11;i++){
		if(i%2==0){//even
			oddSum+=id[i]-48;
		}
		else{
			evenSum+=id[i]-48;
		}
	}
	total=id[12]-48+(evenSum*3)+oddSum;
	if(total%10==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
