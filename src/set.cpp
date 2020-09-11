#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> S;
    S.insert(1); // O(logN)
    S.insert(3);
    S.insert(-8);
    S.insert(0);
    S.insert(10);
    S.erase(3); // O(logN)

    /* set maintains ascending order */

    // for int x in S
    for (int x : S)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = S.find(8);
    if (it == S.end())
    {
        cout << "element not found" << endl;
    }
    else
    {
        cout << "element found" << endl;
        cout << *it << endl;
    }

    auto it2 = S.lower_bound(1); //first iterator >=  //1
    auto it3 = S.upper_bound(1); //first iterator >   //3

    cout << *it2 << " " << *it3 << endl;

    auto it4 = S.upper_bound(10); //S.end()  //4
    if (it4 == S.end())
    {
        cout << "element not found" << endl;
    }
}