
#include <bits/stdc++.h>
#include <climits>
#include <cmath>
#include <unordered_map>

using namespace std;
// https://atcoder.jp/contests/abc338/tasks/abc338_b

int main() {
  string s;
  cin >> s;
  unordered_map<char, int> m;
  for (auto c : s) {
    m[c]++;
  }
  int max = 0;
  char result = 'z' + 1;
  for (auto c : m) {
    if (c.second > max) {
      max = c.second;
      result = c.first;
    } else if (c.second == max && c.first < result) {
      result = c.first;
    }
  }
  cout << result;

  return 0;
}
