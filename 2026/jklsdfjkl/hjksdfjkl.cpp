#include<iostream>
#include<string>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string temp="4",in,command[100];
    int L=0,R=0,T=0,U=0,LT=0,LU=0,RT=0,RU=0,pos;
    cin>>pos;
    cin>>in;
    temp+=in;
    temp+='4';
    int count=0;
    for(int i = 0;i<temp.size();i++){
        if(temp[i]=='L'){
            if(temp[i+1]=='4'&&temp[i-1]=='4'){
                command[count]="L";
                count++;
            }
            if(temp[i+1]=='T'){
                command[count]="P";
                count++;
            }
            if(temp[i+1]=='U'){
                command[count]="K";
                count++;
            }
        }
        if(temp[i]=='R'){
            if(temp[i+1]=='4'&&temp[i-1]=='4'){
                command[count]="R";
                count++;
            }
            if(temp[i+1]=='T'){
                command[count]="I";
                count++;
            }
            if(temp[i+1]=='U'){
                command[count]="Y";
                count++;
            }
        }


        if(temp[i]=='T'&&temp[i-1]=='4'&&temp[i+1]=='4'){
            command[count]="T";
            count++;
        }
        if(temp[i]=='U'&&temp[i-1]=='4'&&temp[i+1]=='4'){
            command[count]="U";
            count++;
        }
    }
/*
    cout<<"L"<<L<<endl;
    cout<<"R"<<R<<endl;
    cout<<"T"<<T<<endl;
    cout<<"U"<<U<<endl;
    cout<<"P"<<LT<<endl;
    cout<<"I"<<RT<<endl;
    cout<<"K"<<LU<<endl;
    cout<<"Y"<<RU<<endl;
*/
	for(int j=0;j<=10;j++){
		if (command[j]=="L"){
			if(pos%10!=1){
				pos=pos-1;
			}
		}
		if (command[j]=="R"){
			if(pos%10!=0){
				pos=pos+1;	
			}
		}
		if (command[j]=="T"){
		    if(pos>10){
				pos=pos-10;		
			}
		}
		if (command[j]=="U"){
			if(pos<=90){
				pos=pos+10;
			}
		}
		
		if (command[j]=="P"){
			if(pos%10!=1&&pos>10){
				pos=pos-11;	
			}
		}
		if (command[j]=="I"){
			if(pos%10!=0&&pos>10){
				pos=pos-9;
			}
		}
		if (command[j]=="K"){
			if(pos%10!=1&&pos<=90){
				pos=pos+9;
			}
		}
		if (command[j]=="Y"){
			if(pos<=90&&pos%10!=0){
				pos=pos+11;                             
			}
		}
		
	}
	
    cout<<pos;
}
