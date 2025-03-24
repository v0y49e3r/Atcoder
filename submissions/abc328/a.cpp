#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int sum = 0;
  for (int i = 0; i < a; ++i) {
    int element;
    cin >> element;
    if (element <= b)
      sum += element;
  }
  cout << sum;

  return 0;
}
