#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string x;
    cin >> x;
    if (x[0] == x[1]) {
        if (x[1] == x[2]) {
            if (x[2] == x[3]) {
                if (x[3] == x[4]) {
                    // All characters are the same
                } else {
                    cout << "1" << x[2];
                    if (x[3] == x[4]) {
                        cout << "2" << x[4];
                    } else {
                        cout << "1" << x[3];
                        cout << "1" << x[4];
                    }
                }
            } else {
                cout << "1" << x[1];
                if (x[2] == x[3]) {
                    if (x[3] == x[4]) {
                        cout << "3" << x[4];
                    } else {
                        cout << "2" << x[3];
                    }
                } else {
                    cout << "1" << x[2];
                }
            }
        } else {
            cout << "1" << x[0];
            if (x[1] == x[2]) {
                if (x[2] == x[3]) {
                    if (x[3] == x[4]) {
                        cout << "4" << x[4];
                    } else {
                        cout << "3" << x[3];
                    }
                } else {
                    cout << "2" << x[2];
                }
            } else {
                cout << "1" << x[1];
            }
        }
    }

    return 0;
}

