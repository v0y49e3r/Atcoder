
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;
int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] != '2') {
      continue;
    }
    cout << s[i];
  }
  return 0;
}
