#include <bits/stdc++.h>

using namespace std;
int main() {
  int y;
  cin >> y;
  if (y < 100)
    cout << 100 - y;
  else if (y < 200)
    cout << 200 - y;
  else if (y < 300)
    cout << 300 - y;
  return 0;
}
