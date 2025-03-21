#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned long long sum = 0;

  for (int i = 0; i < 64; ++i) {
    unsigned long long a;
    cin >> a;
    sum += a << i;
  }
  cout << sum;
  return 0;
}
