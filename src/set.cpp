#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> S;
    S.insert(1);
    S.insert(3);
    S.insert(-8);
    S.insert(0);
    /* set maintains ascending order */

    // for int x in S
    for (int x : S)
    {
        cout << x << " ";
    }
}