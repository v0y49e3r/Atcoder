#include <bits/stdc++.h>

using namespace std;
int main() {
  int count = 0;

  for (int i = 0; i < 12; ++i) {
    string s;
    cin >> s;
    if (s.length() == i + 1) {
      count++;
    }
  }
  cout << count;
  return 0;
}
