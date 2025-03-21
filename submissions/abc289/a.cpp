#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <stdexcept>
using namespace std;

int main() {
  string s;
  cin >> s;
  string result = "";
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '0') {
      result = result + '1';
    } else {
      result = result + '0';
    }
  }
  cout << result;
  return 0;
}
