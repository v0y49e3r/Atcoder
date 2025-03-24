#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  int n;
  cin >> n;
  int max = 0;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }

  for (int i = 0; i < n; ++i) {
    if (vec[i] > max) {
      max = vec[i];
    }
  }
  for (int i = 0; i < n; ++i) {
    if (vec[i] == max) {
      cout << i + 1;
      return 0;
    }
  }

  return 0;
}
