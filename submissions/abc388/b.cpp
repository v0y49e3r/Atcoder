#include <bits/stdc++.h>

#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> leng;
    vector<int> t_;
    for (int i = 0; i < n; ++i)
    {
        int t, l;
        cin >> t >> l;
        leng.push_back(l);
        t_.push_back(t);
    }

    for (int k = 1; k <= d; ++k)
    {
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            v.push_back((t_[i]) * (leng[i] + k));
        }

        cout << *max_element(v.begin(), v.end()) << endl;
    }
    return 0;
}

