// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int x;
        cin >> x;

        bool found = false;

        for (int i = 1; i <= n; i++)
        {
            if (x == a[i])
            {
                found = true;
            }
        }

        if (found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}