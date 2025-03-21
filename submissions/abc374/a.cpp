#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  cin >> s;
  string newStr = s.substr(s.length() - 3, 3);
  if (newStr != "san") {
    cout << "No";

  } else {
    cout << "Yes";
  }

  return 0;
}
