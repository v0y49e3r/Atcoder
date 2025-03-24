#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> vec(n);
  vector<int> vec1(n);
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    vec[i] = a;
    vec1[i] = a;
  }
  sort(vec1.begin(), vec1.end());
  for (int i = 0; i < n; ++i) {
    if (vec1[n - 2] == vec[i]) {
      cout << i + 1;
      return 0;
    }
  }
  return 0;
}
