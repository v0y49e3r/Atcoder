
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int current_j = 0;
  for (int i = 0; i < s.size(); ++i) {
    for (int j = current_j; j < t.size(); ++j) {
      if (s[i] == t[j]) {
        cout << j + 1 << " ";
        current_j = j + 1;
        break;
      }
    }
  }

  return 0;
}
