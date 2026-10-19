#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int n,x,m=0,l=0,off;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        if(x>18) {
            m++;
        }
        else {
            l++;
        }
    }
  //  cout<<m<<" "<<l<<endl;
    if(m>l) {
        off=m-1-l;
        m=m+off+l;
    }
    if (m<=l) {
        m=m+l;
    }
    cout<<m;
}