#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    x=n%1000;
    n=(n-x)/1000;
    cout<<n<<","<<x;
}