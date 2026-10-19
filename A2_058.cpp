#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int i,n=0,a,b,d,r;
    cin>>a>>b>>d>>r;
    for (i=a;i<=b;i++) {
        if (i%d==r) {
            n++;
        }
    }
    cout<<n<<endl;
}