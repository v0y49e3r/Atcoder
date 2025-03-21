#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int sum = 0;
    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; j++)
        {
            sum = sum + (i * j);
        }
    }

    for (int i = 1; i <= 9; ++i)
    {
        for (int j = 1; j <= 9; ++j)
        {
            if (i * j == x)
            {
                sum = sum - x;
            }
        }
    }
    cout << sum;
    return 0;
}

