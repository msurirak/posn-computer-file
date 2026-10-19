#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    float n,sum,x,result;
    string gate="PASS";
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(x<50) {
            gate="FAIL";
        }
        sum=sum+x;
    }
    result=sum/n;
    if(result<60) {
        gate="FAIL";
    }
    cout<<fixed<<setprecision(1)<<result<<"\n"<<gate;
}