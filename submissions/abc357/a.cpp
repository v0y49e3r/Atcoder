#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;
  for (int i = 0; i < a; ++i) {
    int n;
    cin >> n;
    if (b - n >= 0) {
      b = b - n;
      count++;
    } else {
      break;
    }
  }
  cout << count;
  return 0;
}
