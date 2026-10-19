#include <iostream>
using namespace std;
int main() {
	int time,height=0;
	cin>>time;
	for(int i =0;i<time;i++){
		height=height+4+(6*i);
	}
	cout<<height;
}
