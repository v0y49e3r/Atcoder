#include <bits/stdc++.h>

using namespace std;
int main() {
    vector<int> v(5);
    for (int i = 0; i < 5; ++i) {
        cin >> v[i];
    }
    vector<int> ans = {1, 2, 3, 4, 5};
    for (int i = 0; i < 4; ++i) {
        vector<int> b = v;
        int temp = b[i];
        b[i] = b[i + 1];
        b[i + 1] = temp;
        if (b == ans) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}
