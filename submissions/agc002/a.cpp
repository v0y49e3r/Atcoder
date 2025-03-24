#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <filesystem>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int count = 0;
  for (int i = a; i <= b; ++i) {
    if (i < 0) {
      count++;
    }
    if (i == 0) {
      cout << "Zero";
      return 0;
    }
  }
  if (count % 2 == 1) {
    cout << "Negative";
  } else {
    cout << "Positive";
  }

  return 0;
}
