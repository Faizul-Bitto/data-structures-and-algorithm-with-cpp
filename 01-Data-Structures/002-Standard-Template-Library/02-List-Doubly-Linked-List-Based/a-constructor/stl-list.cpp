#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> list;
    // cout << list.size() << endl;

    // list<int> list(10, 3);
    // cout << list.size() << endl;
    // cout << *list.begin() << endl;

    // list<int> list(10, 3);
    // for (auto it = list.begin(); it != list.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    list<int> myList = {1, 2, 3, 4, 5};
    list<int> list2(myList);
    for (int value : list2)
    {
        cout << value << " ";
    }

    // int a[] = {10, 20, 30};
    // list<int> list(a, a + 3);
    // for (int value : list)
    // {
    //     cout << value << " ";
    // }

    // vector<int> v = {10, 20, 30};
    // list<int> list(v.begin(), v.end());
    // for (int value : list)
    // {
    //     cout << value << " ";
    // }

    return 0;
}