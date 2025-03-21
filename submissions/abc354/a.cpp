#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  int count = 0;
  int now = 0;
  while (now <= a) {
    now = now + pow(2, count);
    count++;
  }
  cout << count;
  return 0;
}
