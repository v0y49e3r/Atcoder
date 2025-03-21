#include <bits/stdc++.h>
#include <future>
using namespace std;
#include <string>

int main() {
  string s;
  cin >> s;
  for (int i = 1; i < 17; i = i + 2) {
    if (s[i] != '0') {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes";

  return 0;
}
