#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2;

    v2 = v1;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    for (int x : v2)
    {
        cout << x << " ";
    }

    return 0;
}