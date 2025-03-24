#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  long long count = (a % b == 0) ? a / b : a / b + 1;
  cout << count;

  return 0;
}
