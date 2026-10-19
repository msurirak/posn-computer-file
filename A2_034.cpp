#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main(){
    int x,k,i,o;
    string s="Yes";
    k=0;
    cin>>x;
    for (i=2;i<x;i++) {
        if(x%i==0){
            s="No";
        }
    }
    if (x==1||x==0) {
        s="No";
    }
    cout<<s<<"\n";
    if (s=="Yes") {
        for (o=1;o<=x;o++) {
            for (i=2;i<o;i++) {
                if(o%i==0){
                    k=3;
                    i=o;
                }
            }
            if (k==1) {
                cout<<o<<" ";
            }
            k=1;
        }
    }
}