#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  cin >> s;
  int count = 0;
  vector<int> vec;
  for (int i = 1; i < s.length(); ++i) {
    if (s[i] == '-') {
      count++;
    } else {
      vec.push_back(count);
      count = 0;
    }
  }
  for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  return 0;
}
