#include <bits/stdc++.h>

using namespace std;
int main() {
  int r, g, b;
  cin >> r >> g >> b;
  vector<int> vec;
  for (int i = 0; i < r; ++i) {
    int a;
    cin >> a;
    vec.push_back(a);
  }

  for (int i = 0; i < g; ++i) {
    cout << vec[i] << " ";
  }
  cout << b << " ";
  for (int i = g; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }

  return 0;
}
