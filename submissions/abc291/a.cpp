#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] >= 'A' and s[i] <= 'Z') {
      cout << i + 1;
    }
  }

  return 0;
}
