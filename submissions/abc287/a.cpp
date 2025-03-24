#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    if (s == "For") {
      count++;
    }
  }
  if (count > n / 2) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
