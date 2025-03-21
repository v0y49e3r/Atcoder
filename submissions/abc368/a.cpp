#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  vector<int> vec(a);
  for (int i = 0; i < a; ++i) {
    cin >> vec[i];
  }

  for (int i = 0; i < a; ++i) {
    cout << vec[(vec.size() - b + i) % a] << " ";
  }
  cout << endl;
  return 0;
}
