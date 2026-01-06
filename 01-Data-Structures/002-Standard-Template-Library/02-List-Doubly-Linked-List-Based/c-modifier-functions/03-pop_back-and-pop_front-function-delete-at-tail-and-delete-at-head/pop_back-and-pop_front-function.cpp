#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 30};

    list.pop_back();
    list.pop_front();

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}