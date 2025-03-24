#include <bits/stdc++.h>
#include <future>
using namespace std;
#include <string>

int main() {
  int n, k;
  cin >> n >> k;
  if (n - k <= 3 and k <= n + 2) {
    cout << "Yes";
    return 0;
  }
  cout << "No";
  return 0;
}
