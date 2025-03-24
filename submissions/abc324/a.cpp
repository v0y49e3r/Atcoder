#include <bits/stdc++.h>
#include <future>
using namespace std;
#include <string>

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = 1; i < n; ++i) {
    if (vec[i - 1] != vec[i]) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
  return 0;
}
