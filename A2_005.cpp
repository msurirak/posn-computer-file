#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int w,h,x,y,i,j,w1=0,h1=0,w2=0,h2=0,hr=0,wr=0;
    int a=0,b[4],q[4],p[4];
    cin>>w>>h>>x>>y;
    int m[x+2],n[y+2];
    m[x+1]=w,n[y+1]=h;
    m[0]=0;n[0]=0;
    for (i=1;i<=x;i++) {
        cin>>m[i];
    }
    for (i=1;i<=y;i++) {
        cin>>n[i];
    }
    for (i=1;i<=x+1;i++) {
        wr=w1=m[i]-m[i-1];
        if (wr>w1) {
            w2=w1;
            w1=wr;
        }
        else if (wr>w2) {
            w2=wr;
        }

    }
    for (j=1;j<=y+1;j++) {
        hr=h1=n[j]-n[j-1];
        if (hr>h1) {
            h2=h1;
            h1=hr;
        }
        else if (hr>h2) {
            h2=hr;
        }
    }
    //cout<<w1<<" "<<h1<<" "<<w2<<" "<<h2<<endl;
    q[0]=w1*h1;
    q[1]=w1*h2;
    q[2]=w2*h1;
    q[3]=w2*h2;
    for (i=0;i<4;i++) {
        p[i]=0;
    }
    int r=-1;
    for (j=0;j<4;j++) {
        for (i=0;i<4;i++) {
            if (a<q[i]) {
                a=q[i];
                r=i;
            }
        }
        b[j]=r;
        p[j]=q[r];
        q[r]=0;
        a=0;
    }
    cout<<p[0]<<" "<<p[1];
}