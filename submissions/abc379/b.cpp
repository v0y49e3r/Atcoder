#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, a;
  string s;
  cin >> n >> a >> s;
  int count = 0;
  vector<int> vec;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'O') {
      count++;
    } else {
      if (count > 0) {
        vec.push_back(count);
      }
      count = 0;
    }
  }
  if (count > 0) {
    vec.push_back(count);
  }
  int c = 0;
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] >= a) {
      c = c + vec[i] / a;
    }
  }
  cout << c;
  return 0;
}
