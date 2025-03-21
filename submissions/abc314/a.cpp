#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  string s = "3."
             "14159265358979323846264338327950288419716939937510582097494459230"
             "78164062862089986280348253421170679";
  string result = "3.";
  for (int i = 2; i < 2 + n; ++i) {
    result = result + s[i];
  }
  cout << result;
  return 0;
}

