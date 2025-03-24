#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = n - 1; i >= 0; --i) {
    cout << vec[i] << endl;
  }
  return 0;
}
