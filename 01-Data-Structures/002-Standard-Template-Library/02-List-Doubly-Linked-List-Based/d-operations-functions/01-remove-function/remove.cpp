#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 10, 20, 30, 40, 50, 10, 10, 60};

    myList.remove(10);

    for (int value : myList)
    {
        cout << value << " ";
    }

    return 0;
}