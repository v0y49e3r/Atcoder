#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Duyệt qua các giá trị X có thể có từ 1 đến n
    for (int X = 1; X <= n; ++X) {
        if (X * 108 / 100 == n) {
            cout << X;
            return 0;
        }
    }

    // Nếu không tìm thấy
    cout << ":(";
    return 0;
}
