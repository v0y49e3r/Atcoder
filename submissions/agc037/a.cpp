#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;
  string currentString = "";
  string lastString = "";
  for (char c : s) {
    currentString = currentString + c;
    if (currentString != lastString) {
      count++;
      lastString = currentString;
      currentString = "";
    }
  }
  cout << count;
  return 0;
}
