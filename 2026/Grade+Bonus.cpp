#include<bits/stdc++.h>
using namespace std;
int main(){
	string grade[] = {"A+","A","B+","B","C+","C","D+","D","F"}; 
	vector<string> id;
	vector<string> grade;
	string temp;
	while (true){
		cin>>temp;
		if(temp=="q"){break;}
		id.push_back(temp);
		cin>>temp;
		grade.push_back(temp);
	}
	string bonus[id.size()];
	for(int i=0;i<id.size();i++){ 
		cin>>bonus[i];
	}
	for(int i=0;i<id.size();i++){ 
		cout<<bonus[i];
	}
}
