#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Nếu có số lẻ ngay từ đầu, in ra 0 và kết thúc
    for (int a : v) {
        if (a % 2 != 0) {
            cout << 0;
            return 0;
        }
    }

    int count = 0;

    while (true) {
        for (int i = 0; i < n; ++i) {
            if (v[i] % 2 != 0) {
                cout << count; // Khi gặp số lẻ, in kết quả và kết thúc
                return 0;
            }
            v[i] /= 2; // Chia hết cho 2
        }
        count++;
    }
}
