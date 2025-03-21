#include <bits/stdc++.h>

using namespace std;
int main() {
  int y;
  cin >> y;
  vector<string> vec(y);
  for (int i = 0; i < y; ++i) {
    cin >> vec[i];
  }
  if (vec[y - 1] == "sweet") {
    for (int i = 0; i < y - 2; ++i) {
      if (vec[i] == "sweet" and vec[i + 1] == "sweet") {
        cout << "No";
        return 0;
      }
    }
  } else {

    for (int i = 0; i < y - 1; ++i) {
      if (vec[i] == "sweet" and vec[i + 1] == "sweet") {
        cout << "No";
        return 0;
      }
    }
  }
  cout << "Yes";
  return 0;
}
