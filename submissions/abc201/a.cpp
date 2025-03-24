#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  vector<int> vec(3);
  cin >> vec[0] >> vec[1] >> vec[2];
  sort(vec.begin(), vec.end());
  if ((vec[2] + vec[0]) / 2 == vec[1])
    cout << "Yes";
  else
    cout << "No ";
 
  return 0;
}
