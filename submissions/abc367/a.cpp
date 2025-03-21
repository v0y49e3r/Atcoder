#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Trường hợp ngủ qua nửa đêm
    if (b > c) {
        if (a >= c && a < b) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {  // Trường hợp ngủ trong một ngày
        if (a >= b && a < c) {
            cout << "No";
        } else {
            cout << "Yes";
        }
    }

    return 0;
}
