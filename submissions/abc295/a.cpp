#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> vec = {"and", "not", "that", "the", "you"};
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    for (int j = 0; j < vec.size(); j++) {
      if (s == vec[j]) {
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
  return 0;
}
