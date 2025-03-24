#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_set<string> vec1 = {"H", "2B", "3B", "HR"};
  unordered_set<string> vec2(4);
  for (int i = 0; i < 4; ++i) {
    string a;
    cin >> a;
    vec2.insert(a);
  }
  if (vec1 == vec2) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
