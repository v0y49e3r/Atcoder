
#include <bits/stdc++.h>
#include <climits>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> left;
  vector<int> right;
  for (int i = 0; i < n; ++i) {
    char c;
    int a;
    cin >> a >> c;
    if (c == 'L') {
      left.push_back(a);
    } else {
      right.push_back(a);
    }
  }
  int sum_left = 0;
  for (int i = 1; i < left.size(); ++i) {
    if (left[i] == left[i - 1]) {
      continue;
    } else {
      sum_left += abs(left[i - 1] - left[i]);
    }
  }
  int sum_right = 0;
  for (int i = 1; i < right.size(); ++i) {
    if (right[i] == right[i - 1]) {
      continue;
    } else {
      sum_right += abs(right[i - 1] - right[i]);
    }
  }
  cout << sum_left + sum_right;
  return 0;
}
