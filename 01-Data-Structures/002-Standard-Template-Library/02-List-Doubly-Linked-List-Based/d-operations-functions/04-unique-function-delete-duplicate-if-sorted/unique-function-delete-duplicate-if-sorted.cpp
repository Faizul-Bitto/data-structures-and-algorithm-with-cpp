#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 10, 20, 20, 30, 30, 50, 20, 10, 30, 60, 80};

    myList.sort();

    myList.unique();

    for (int value : myList)
    {
        cout << value << " ";
    }

    return 0;
}