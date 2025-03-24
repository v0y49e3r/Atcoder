#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
int main() {
  int n, t, a;
  cin >> n >> t >> a;
  if (a > (n / 2) or t > n / 2) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
