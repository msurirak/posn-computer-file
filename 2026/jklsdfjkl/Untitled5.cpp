#include <iostream>
using namespace std;
int main() {
	int x,temp;
	int array[3];
	cin>>x;
	for(int i = 0;i<3;i++){
		cin>>array[i];
	}
	int *px,*pArray;
	px = &x;
	cin>>temp;
	*px+=temp;
	pArray = &array[0];
	for(int i = 0;i<3;i++){
		cin>>temp;
		*pArray+=temp;
		pArray++;
	}
	cout<<x<<endl;
	for(int i=0;i<3;i++){
		cout<<array[i]<<" ";
	}
}
