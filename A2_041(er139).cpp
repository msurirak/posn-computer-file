#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int x,i,n,r,q;
    bool bo=false;
    cin>>x;
    if (x==0) {
        cout<<"0"<<"\n";
        cout<<"0"<<"\n";
        cout<<"0"<<"\n";
    }
    for (i=0;i<x;i++) {
        if (x<pow(2,i)) {
            n=i;
            i=x;
        }
    }
    int base2[n];
    q=x;
    bo=false;
    i=0;
    do {
        r=q%2;
        base2[i]=r;
        q=(q-r)/2;
        if (q==0) {
            bo=true;
        }
        i++;
    }while (bo==false);

    for (int i=n-1;i>=0;i--) {
        cout<<base2[i];
    }
    cout<<"\n";
    for (i=0;i<x;i++) {
        if (x<pow(8,i)) {
            n=i;
            i=x;
        }
    }
    int base8[n];
    q=x;
    i=0;
    bo=false;
    do {
        r=q%8;
        base8[i]=r;
        q=(q-r)/8;
        if (q==0) {
            bo=true;
        }
    }while (bo==false);
    for (int i=n-1;i>=0;i--) {
        cout<<base8[i];
    }
    cout<<"\n";

    for (i=0;i<x;i++) {
        if (x<pow(16,i)) {
            n=i;
            i=x;
        }
    }
    int base16[n];
    q=x;
    for (int i=0;i<n;i++) {
        r=q%16;
        base16[i]=r;
        q=(q-r)/16;
        if (q==0) {
            i=n;
        }
    }
    for (int i=n-1;i>=0;i--) {
        if (base16[i]>=10) {
            if (base16[i]==10) {
                cout<<"A";
            }
            if (base16[i]==11) {
                cout<<"B";
            }
            if (base16[i]==12) {
                cout<<"C";
            }
            if (base16[i]==13) {
                cout<<"D";
            }
            if (base16[i]==14) {
                cout<<"E";
            }
            if (base16[i]==15) {
                cout<<"F";
            }
        }
        else {
            cout<<base16[i];
        }
    }
}