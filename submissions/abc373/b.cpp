
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main() {
  string s;
  cin >> s;

  string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  vector<int> v(26);
  for (int i = 0; i < s.size(); ++i) {
    for (int j = 0; j < str.size(); ++j) {
      if (s[i] == str[j]) {
        v[j] = i;
        break;
      }
    }
  }
  int sum = 0;
  for (int i = 0; i < v.size() - 1; ++i) {
    sum = sum + (abs(v[i] - v[i + 1]));
  }
  cout << sum;
  return 0;
}

