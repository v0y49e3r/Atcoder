#include <bits/stdc++.h>

using namespace std;
int main() {
  int r, g, b;
  string c;
  cin >> r >> g >> b >> c;
  if (c == "Red") {
    cout << min(g, b);
  } else if (c == "Green") {
    cout << min(r, b);
  } else {
    cout << min(r, g);
  }
  return 0;
}
