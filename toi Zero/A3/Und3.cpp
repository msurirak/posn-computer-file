#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int y[n];
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    // Selection sort-like logic
    for (int m = 0; m < n; m++) {
        int min_val = 1000000; // large initial value
        int min_index = -1;

        for (int i = 0; i < n; i++) {
            if (y[i] < min_val) {
                min_val = y[i];
                min_index = i;
            }
        }

        cout << min_val << " ";
        y[min_index] = 1000000; // mark as used
    }

    return 0;
}

