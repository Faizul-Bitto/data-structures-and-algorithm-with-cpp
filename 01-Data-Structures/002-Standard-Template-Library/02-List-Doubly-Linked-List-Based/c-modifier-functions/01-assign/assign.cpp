#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    list<int> myList2;

    // myList2 = myList;
    myList2.assign(myList.begin(), myList.end());

    for (int value : myList2)
    {
        cout << value << " ";
    }

    return 0;
}