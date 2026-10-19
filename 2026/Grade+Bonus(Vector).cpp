#include<bits/stdc++.h>
using namespace std;
int main(){
	string Tgrade[] = {"A+","A","B+","B","C+","C","D+","D","F"}; 
	vector<string> id;
	vector<string> grade;
	string bonus,temp;
	while (true){
		cin>>temp;
		if(temp=="q"){break;}
		id.push_back(temp);
		cin>>temp;
		grade.push_back(temp);
	}
	cin.ignore();
    getline(cin,temp);
	stringstream ss(temp);
	while(ss >> bonus){ 
		auto it = find(id.begin(),id.end(),bonus);
		if(it!= id.end()){
			int index = it-id.begin();
		}
	}
}