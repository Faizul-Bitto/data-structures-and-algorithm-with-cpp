#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    list<int> list(v.begin(), v.end());

    list.clear();
    cout << list.size() << endl;

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}