#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D;
  cin >> M >> D;
  int y, m, d;
  cin >> y >> m >> d;
  if (d + 1 > D) {
    d = 1;
    if (m + 1 > M) {
      y++;
      m = 1;
    } else {
      m++;
    }

  } else {
    d++;
  }
  cout << y << " " << m << " " << d << endl;
  return 0;
}
