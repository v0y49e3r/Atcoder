#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n;

  string s;
  cin >> n >> s;
  int index1 = 0;
  int index2 = 0;
  for (int i = s.length() - 1; i >= 0; --i) {
    if (s[i] == '|') {
      index1 = i;
    }
  }
  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '|') {
      index2 = i;
    }
  }

  for (int i = 0; i < s.length(); ++i) {
    if (s[i] == '*') {
      if (i < index2 and i > index1) {
        cout << "in";
      } else {
        cout << "out";
      }
    }
  }

  return 0;
}
