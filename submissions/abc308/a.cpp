#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main() {
  vector<int> vec(8);
  for (int i = 0; i < 8; ++i) {
    cin >> vec[i];
  }

  for (int i = 1; i < 8; ++i) {
    if (vec[i - 1] > vec[i] or (vec[i] < 100 or vec[i] > 675) or
        vec[i] % 25 != 0) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";

  return 0;
}
