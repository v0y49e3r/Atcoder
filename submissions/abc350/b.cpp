#include <bits/stdc++.h>

#include <unordered_map>

using namespace std;

int main()
{
    int t, q;
    cin >> t >> q;
    vector<int> v;
    unordered_map<int, int> umap;
    for (int i = 0; i < q; ++i)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    for (auto e : v)
    {
        umap[e]++;
    }
    for (auto e : umap)
    {
        if (e.second % 2 == 0)
        {
            continue;
        }
        else
        {
            t--;
        }
    }
    cout << t;

    return 0;
}

