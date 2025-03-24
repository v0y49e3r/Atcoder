#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a;
    cin >> b;
    if (a == 1) {
      v.push_back(b);
    } else {
      cout << v[v.size() - b] << endl;
    }
  }
  return 0;
}
