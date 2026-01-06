#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 20, 40, 50, 60, 20, 80, 90, 20};

    auto it = find(list.begin(), list.end(), 20);

    if (it == list.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    return 0;
}