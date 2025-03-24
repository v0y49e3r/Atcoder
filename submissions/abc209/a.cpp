#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;
  if (a > b) {
    cout << 0;
    return 0;
  } else {
    for (int i = a; i <= b; ++i) {
      count++;
    }
  }
  cout << count;
  return 0;
}
