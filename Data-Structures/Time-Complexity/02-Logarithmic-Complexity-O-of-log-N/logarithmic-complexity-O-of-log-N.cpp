#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = n; i > 0; i /= 3)
    {
        cout << i << " ";
    }

    return 0;
}