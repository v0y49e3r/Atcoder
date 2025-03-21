#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int countUp = 0, countLow = 0;
  for (char c : s) {
    if (isupper(c)) {
      countUp++;
    } else {
      countLow++;
    }
  }
  if (countUp > countLow) {
    for (char c : s) {
      cout << (char)toupper(c);
    }
  } else {
    for (char c : s) {
      cout << (char)tolower(c);
    }
  }
  return 0;
}
