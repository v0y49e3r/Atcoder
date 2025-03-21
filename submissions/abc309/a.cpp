#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  if (a % 3 != 0 and a + 1 == b) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
