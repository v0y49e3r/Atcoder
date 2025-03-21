
#include <bits/stdc++.h>
using namespace std;
#include <string>

int main() {
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  string s;
  cin >> s;
  for (auto c : s) {

    if (c == '1')
      count1++;
    else if (c == '2')
      count2++;
    else if (c == '3') {
      count3++;
    }
  }

  if (count1 == 1 and count2 == 2 and count3 == 3) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
