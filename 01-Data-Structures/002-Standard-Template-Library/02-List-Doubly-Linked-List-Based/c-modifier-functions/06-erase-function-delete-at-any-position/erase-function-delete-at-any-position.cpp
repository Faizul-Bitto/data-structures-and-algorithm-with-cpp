#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // list.erase(next(list.begin(), 1));
    list.erase(next(list.begin(), 3), next(list.begin(), 9));

    for (int value : list)
    {
        cout << value << " ";
    }

    return 0;
}