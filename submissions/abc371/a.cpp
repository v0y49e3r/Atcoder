
#include <bits/stdc++.h>

using namespace std;
int main() {
  string ab, ac, bc;
  cin >> ab >> ac >> bc;
  if (ab == bc) {
    cout << "B";
  } else if (ab != ac) {
    cout << "A";
  } else {
    cout << "C";
  }

  return 0;
}
