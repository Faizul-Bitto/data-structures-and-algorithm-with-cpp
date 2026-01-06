#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 30};

    list.push_back(40);
    list.push_front(100);

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}