#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> has_taro(n, false);
  for (int i = 0; i < m; ++i) {
    int a;
    char b;
    cin >> a >> b;
    int house_index = a - 1;
    if (b == 'M') {
      if (!has_taro[house_index]) {
        cout << "Yes" << endl;
        has_taro[house_index] = true;
      } else {
        cout << "No" << endl;
      }
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
