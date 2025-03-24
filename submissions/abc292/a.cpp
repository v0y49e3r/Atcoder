#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); ++i) {
    s[i] = toupper(s[i]);
  }
  cout << s;
  return 0;
}
