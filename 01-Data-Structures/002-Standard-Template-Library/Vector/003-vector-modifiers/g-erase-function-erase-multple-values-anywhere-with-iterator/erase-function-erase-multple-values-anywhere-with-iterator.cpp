#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // v.erase(pos, pos);
    // v.insert(iterator, iterator); -> starts from index 0 and stops one step previous
    v.erase(v.begin() + 1, v.begin() + 4);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}