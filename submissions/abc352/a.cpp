#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int min_ = min(b, c);
  int max_ = max(b, c);
  if (min_ <= d and d <= max_) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
