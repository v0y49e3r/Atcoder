#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long result = 1;

    int count = 1;
    while (result < x)
    {
        count++;
        result = result * count;
    }
    if (result == x)
    {
        cout << count;
    }
    return 0;
}

