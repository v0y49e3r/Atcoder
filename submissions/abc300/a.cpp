#include <bits/stdc++.h>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v(a);
    for (int i = 0; i < a; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < a; ++i) {
        if (b + c == v[i]) {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}
