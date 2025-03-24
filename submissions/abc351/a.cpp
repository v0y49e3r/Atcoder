#include <bits/stdc++.h>
using namespace std;
int main() {
  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < 9; ++i) {
    int a;
    cin >> a;
    sum1 = sum1 + a;
  }
  for (int i = 0; i < 8; ++i) {
    int a;
    cin >> a;
    sum2 = sum2 + a;
  }
  cout << sum1 - sum2 + 1;
  return 0;
}
