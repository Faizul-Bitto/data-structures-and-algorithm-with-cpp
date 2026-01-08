#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {50, 20, 10, 30, 60, 80};

    myList.sort();

    for (int value : myList)
    {
        cout << value << " ";
    }

    return 0;
}