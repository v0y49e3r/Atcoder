#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    if (a == k) {
      cout << i + 1;
      return 0;
    }
  }

  return 0;
}
