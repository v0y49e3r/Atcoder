#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> v;
  v.push_back(a);
  v.push_back(b);
  v.push_back(c);

  sort(v.begin(), v.end());
  for (int i = 0; i < 3; ++i) {
    if (v[1] == b) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}
