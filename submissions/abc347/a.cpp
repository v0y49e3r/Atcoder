#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  vector<int> vec;
  for (int i = 0; i < a; ++i) {
    int n;
    cin >> n;
    if (n % b == 0) {
      vec.push_back(n / b);
    }
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  return 0;
}
