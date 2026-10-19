#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int base,bonus,day,i,sp=0;
    float sum;
    cin>>base>>bonus>>day;
    if (day<=3) {
        sum=base+bonus;
    }
    else {
        sum=(base+bonus)*1.5;
    }
    cout<<sum<<"\n";
    if (sum>=1500) {
        i=5;
        if (day>=7) {
            sp=99;
        }
    }
    else if (sum>=1000) {
        i=4;
        if (bonus>300) {
            sp=88;
        }
    }
    else if (sum>=500) {
        i=3;
    }
    else if (sum>=200) {
        i=2;
    }
    else {
        i=1;
    }
    cout<<i<<"\n"<<sp;
}