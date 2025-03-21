#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> vec = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  string s;
  cin >> s;
  for (int i = 0; i < 5; ++i) {
    if (vec[i] == s) {
      cout << 6 - 1 - i;
      return 0;
    }
  }
  return 0;
}
