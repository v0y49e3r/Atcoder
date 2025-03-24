#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  int value = a * 1.08;
  if (value < 206) {
    cout << "Yay!";
  } else if (value == 206) {
    cout << "so-so";
  } else {
    cout << ":(";
  }
  return 0;
}
