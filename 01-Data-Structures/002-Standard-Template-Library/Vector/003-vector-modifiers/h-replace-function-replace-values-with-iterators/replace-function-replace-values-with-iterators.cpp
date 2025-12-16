#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    // replace(iterator, iterator, value to be replaced, value); -> starts from index 0 and stops one step previous
    replace(v.begin(), v.end(), 2, 100);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}