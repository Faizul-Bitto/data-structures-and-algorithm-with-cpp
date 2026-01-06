#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30};
    list<int> list(v.begin(), v.end());

    cout << list.size() << endl;

    list.resize(5, 100);

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}