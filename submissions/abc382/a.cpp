#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<char> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (vec[i] == '@') {
      count++;
    }
  }
  cout << n - count + d;

  return 0;
}
