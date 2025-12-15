#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // v.erase(pos);
    // v.insert(iterator); -> starts from 0
    v.erase(v.begin() + 2);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}