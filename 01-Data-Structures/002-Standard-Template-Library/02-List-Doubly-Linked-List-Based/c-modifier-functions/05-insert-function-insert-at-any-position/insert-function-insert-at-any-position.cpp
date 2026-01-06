#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 30};
    vector<int> v = {100, 200};

    // list.insert(next(list.begin(), 2), 40);
    list.insert(next(list.begin(), 2), v.begin(), v.end());

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}