#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;

  for (int i = 0; i < n - 1; ++i) {
    int a;
    cin >> a;
    sum = sum + a;
  }
  cout << 0 - sum;
  return 0;
}
