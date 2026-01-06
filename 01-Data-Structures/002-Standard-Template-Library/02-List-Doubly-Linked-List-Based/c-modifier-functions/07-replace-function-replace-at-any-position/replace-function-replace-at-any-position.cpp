#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 20, 40, 50, 60, 20, 80, 90, 20};

    replace(list.begin(), list.end(), 20, 100);

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}