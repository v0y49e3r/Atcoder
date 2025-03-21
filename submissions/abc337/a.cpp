#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum1 = 0;
  int sum2 = 0;

  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    sum1 += x;
    sum2 += y;
  }
  if (sum1 > sum2) {
    cout << "Takahashi";
  } else if (sum1 < sum2) {
    cout << "Aoki";
  } else {
    cout << "Draw";
  }
  return 0;
}
