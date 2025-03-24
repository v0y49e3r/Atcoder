#include <bits/stdc++.h>

using namespace std;
int main() {
    int a;
    cin >> a;
    vector<char> v(a);
    int countT = 0;
    int countA = 0;
    for (int i = 0; i < a; ++i) {
        char c;
        cin >> c;
        v[i] = c;
        if (c == 'A') {
            countA++;
        } else {
            countT++;
        }
    }
    if (countA > countT) {
        cout << 'A';
    } else if (countA == countT) {
        char last_char = v.back();
        if (last_char == 'T') {
            cout << 'A';
        } else {
            cout << 'T';
        }
    } else {
        cout << 'T';
    }

    return 0;
}
