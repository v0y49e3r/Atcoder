#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
int main() {
  vector<int> vec(4);
  unordered_map<int, int> map;
  for (int i = 0; i < 4; ++i) {
    cin >> vec[i];
    map[vec[i]]++;
  }
  int count = 0;
  for (auto ele : map) {
    count = count + ele.second / 2;
  }
  cout << count;
  return 0;
}
