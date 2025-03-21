#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> binary;

  while (n > 0) {
    binary.push_back(n % 2);
    n = n / 2;
  }
  int count = 0;
  for (int i = 0; i < binary.size(); ++i) {
    if (binary[i] == 0) {
      count++;
    } else {
      break;
    }
  }

  cout << count;
  return 0;
}
