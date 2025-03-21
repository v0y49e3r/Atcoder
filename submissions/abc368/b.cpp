#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    while (true)
    {
        sort(v.rbegin(), v.rend());
        if (v[0] == 0 or v[1] == 0)
        {
            break;
        }
        count++;
        v[0] = v[0] - 1;
        v[1] = v[1] - 1;
    }
    cout << count;

    return 0;
}

