#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, s;
  cin >> n >> s;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    cin >> vec[i];
  }
  int count = 1;

  int pre = vec[0];
  for (int i = 1; i < n; ++i) {

    if (vec[i] - pre >= s) {
      count++;
      pre = vec[i];
    }
  }
  cout << count;
  return 0;
}
