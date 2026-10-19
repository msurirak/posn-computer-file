#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int x,i;
    cin>>x;
    i=x%100;
    if(i==0&&x!=0&&x<20000) {
        i=floor(x/1000);
        if (i!=0) {
            cout<<"1000 = "<<i<<"\n";
            x=x-(i*1000);
        }
        i=floor(x/500); 
        if (i!=0){
            cout<<"500 = "<<i<<"\n";
            x=x-(i*500);
        }
        i=floor(x/100);
        if (i!=0) {
            cout<<"100 = "<<i;
        }
    }
    else {
        cout<<"ERROR";
    }
}
