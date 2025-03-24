#include <bits/stdc++.h>

#include <iterator>
#include <unordered_map>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int c_z = 0;
    int c = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            c_z++;
        }
        else
        {
            c++;
            c = c + ((c_z + 1) / 2);
            c_z = 0;
        }
    }
    c = c + ((c_z + 1) / 2);
    cout << c;

    return 0;
}

