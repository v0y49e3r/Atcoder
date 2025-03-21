#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int h = 0;
  int m = 0;
  string s = ":";
  if (n >= 60) {
    h = 22;
  } else {
    h = 21;
  }
  m = n % 60;
  if (m < 10) {
    s = s + "0";
  }
  cout << h << s << m;
  return 0;
}
