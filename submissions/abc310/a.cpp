#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int min_ = INT_MAX;
  for (int i = 0; i < a; ++i) {
    int n;
    cin >> n;

    if (n < min_) {
      min_ = n;
    }
  }
  cout << min(b, min_ + c);

  return 0;
}
