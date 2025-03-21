#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, p;
  cin >> n >> m >> p;
  int count = 0;
  for (int i = m; i <= n; i = i + p) {
    count++;
  }
  cout << count;
  return 0;
}
