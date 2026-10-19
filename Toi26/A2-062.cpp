#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
	int k,a=0,e=0,i=0,o=0,u=0;
	string word;
	getline(cin, word);
	for(k=0;k<word.size();k++){
		if(word[k]=='a'||word[k]=='A'){
			a++;
		}
		if(word[k]=='e'||word[k]=='E'){
			e++;
		}
		if(word[k]=='i'||word[k]=='I'){
			i++;
		}
		if(word[k]=='o'||word[k]=='O'){
			o++;
		}
		if(word[k]=='u'||word[k]=='U'){
			u++;
		}
	}
	if(a>0){
		cout<<"a: "<<a<<"\n";
	}
	if(e>0){
		cout<<"e: "<<e<<"\n";
	}
	if(i>0){	
		cout<<"i: "<<i<<"\n";
	}
	if(o>0){	
		cout<<"o: "<<o<<"\n";
	}
	if(u>0){	
		cout<<"u: "<<u<<"\n";
	}
}
