#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // v.insert(pos, value);
    // v.insert(iterator, value); -> starts from 0
    v.insert(v.begin() + 2, 100);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}