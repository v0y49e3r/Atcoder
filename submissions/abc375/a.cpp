#include <bits/stdc++.h>

using namespace std;
int main() {
  int n;
  cin >> n;
  int count = 0;
  vector<char> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }

  for (int i = 0; i < n - 2; ++i) {
    if (vec[i] == '#' and vec[i + 2] == '#' and vec[i + 1] == '.') {
      count++;
    }
  }
  cout << count;
  return 0;
}
