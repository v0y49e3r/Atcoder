#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> vec;
  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] == '.') {
      break;
    }
    vec.push_back(s[i]);
  }
  for (int i = vec.size() - 1; i >= 0; --i) {
    cout << vec[i];
  }
  return 0;
}
