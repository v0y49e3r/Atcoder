#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  vector<string> vec(n);
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> vec[i];
    int index;
    cin >> index;
    sum += index;
  }
  sort(vec.begin(), vec.end());
  int index = sum % n;
  cout << vec[index];
  return 0;
}
