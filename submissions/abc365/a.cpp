#include <bits/stdc++.h>

using namespace std;
int main() {
  int y;
  cin >> y;
  if (y % 4 != 0) {
    cout << 365;
  } else if (y % 4 == 0 and y % 100 != 0) {
    cout << 366;
  } else if (y % 100 == 0 and y % 400 != 0) {
    cout << 365;
  } else if (y % 400 == 0) {
    cout << 366;
  }
  return 0;
}
