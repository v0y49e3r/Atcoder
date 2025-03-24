#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  int n, t, p;
  cin >> n >> t >> p;
  int count;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = 0; i < t; ++i) {
    count = 0;
    for (int j = 0; j < n; ++j) {
      if (vec[j] + i >= t) {
        count++;
      }
      if (count >= p) {
        cout << i;
        return 0;
      }
    }
  }
  return 0;
}
