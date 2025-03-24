#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vec(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  for (int i = 0; i < k; ++i) {
    vec.erase(vec.begin());
    vec.push_back(0);
  }

  for (int i = 0; i < n; ++i) {
    cout << vec[i] << " ";
  }
  return 0;
}
