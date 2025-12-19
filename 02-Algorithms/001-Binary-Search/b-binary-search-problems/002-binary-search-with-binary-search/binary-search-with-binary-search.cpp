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

    sort(a.begin(), a.end());

    while (q--)
    {
        int value;
        cin >> value;
        bool found = false;

        int left = 1;
        int right = n;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (a[mid] == value)
            {
                found = true;
                break;
            }
            else if (a[mid] > value)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
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