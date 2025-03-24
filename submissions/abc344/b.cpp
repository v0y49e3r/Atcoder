#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> a;
  bool running = true;
  while (running) {
    int index;
    cin >> index;
    a.push_back(index);
    if (index == 0) {
      running = false;
    }
  }
  for (int i = a.size() - 1; i >= 0; --i) {
    cout << a[i] << endl;
  }
  return 0;
}
