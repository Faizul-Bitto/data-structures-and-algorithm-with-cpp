#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};

    // find(iterator, iterator, value); -> starts from index 0 and stops one step previous
    auto it = find(v.begin(), v.end(), 2);

    if (it == v.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}