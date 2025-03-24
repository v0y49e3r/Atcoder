#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  string s;
  cin >> s;

  if (s.length() != 8) {
    cout << "No";
    return 0;
  }
  string substring = s.substr(1, 6);
  if (!isupper(s[0]) or !isupper(s[s.length() - 1])) {
    cout << "No";
    return 0;
  }
  for (auto &c : substring) {
    if (!isdigit(c)) {
      cout << "No";
      return 0;
    }
  }
  int num = stoi(substring);
  if (100000 > num || num > 999999) {
    cout << "No";
    return 0;
  }
  cout << "Yes";

  return 0;
}
