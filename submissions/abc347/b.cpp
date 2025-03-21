#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main() {
  string s;
  cin >> s;

  unordered_set<string> set;

  for (int i = 0; i < s.length(); ++i) {
    string current_str = "";
    for (int j = i; j < s.length(); ++j) {
      current_str += s[j];
      set.insert(current_str);
    }
  }
  cout << set.size();

  return 0;
}
