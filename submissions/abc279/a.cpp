#include <bits/stdc++.h>
#include <cctype>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  string s;
  cin >> s;
  int count = 0;
  for (char c : s) {
    if (c == 'v') {
      count++;
    } else {
      count += 2;
    }
  }
  cout << count;
  return 0;
}
