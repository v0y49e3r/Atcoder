#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
    if (vec[0] < vec[i]) {
      cout << i + 1;
      return 0;
    }
  }
  cout << -1;

  return 0;
}
