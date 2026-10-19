#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    int x;
    int y;
    int i;
    int r;
    int e;
    r = 0;
    cin >> e;
    for (i = 1; i <= e; i++) {
        cin >> y;
        cin >> x;
        if (x >= 150 && x <= 200 && y <= 400) {
            r = r + 1;
        }
    }
    cout<<r;
}
