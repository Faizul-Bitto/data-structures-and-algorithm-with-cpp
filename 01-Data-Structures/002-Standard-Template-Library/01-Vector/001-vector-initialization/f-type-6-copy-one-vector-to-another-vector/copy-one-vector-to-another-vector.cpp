#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5, 1);
    vector<int> v2(v); // copying v to v2

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    cout << endl;

    cout << v2.size();

    return 0;
}