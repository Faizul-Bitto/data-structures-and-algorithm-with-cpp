#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list = {10, 20, 30};

    cout << *next(list.begin(), 2);

    return 0;
}