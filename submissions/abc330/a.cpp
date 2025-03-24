#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;
  for (int i = 0; i < a; ++i) {
    int elem;
    cin >> elem;
    if (elem >= b)
      count++;
  }
  cout << count;

  return 0;
}
