#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Hooti {
	int weight;
	string type;	
};

int main() {
	int temp;
	string h;
	
	cin>>temp>>h;
	Hooti fruit1 = {temp,h};
	
	cin>>temp>>h;
	Hooti fruit2 = {temp,h};
	
	if(fruit1.weight>fruit2.weight){
		cout<<fruit1.type;
		cout<<" is heavier than ";
		cout<<fruit2.type;
	}
	else{
		cout<<fruit2.type;
		cout<<" is heavier than ";
		cout<<fruit1.type;
	}
}
