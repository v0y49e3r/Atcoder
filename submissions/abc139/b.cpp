#include <bits/stdc++.h>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int result = (b - 1) / (a - 1);
    if ((b - 1) % (a - 1) != 0) {
        result++;
    }
    cout << result;

    return 0;
}
