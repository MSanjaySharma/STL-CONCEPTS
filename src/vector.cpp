#include <bits/stdc++.h>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

int main()
{
    vector<int> A = {56, 7, 27, 6, 9};

    cout << A[4] << endl; //9

    sort(A.begin(), A.end()); // O(Nlog(N))
    /* 6, 7, 9,27, 56 */
    /* sort mutates the vector */

    cout << A[4] << endl; //56

    /* Binary Search - O(logN) */
    bool present = binary_search(A.begin(), A.end(), 7);

    std::cout << std::boolalpha << present << endl; // 1 --- true

    present = binary_search(A.begin(), A.end(), 8);

    std::cout << std::boolalpha << present << endl; //0 --- false

    A.push_back(67);  /* 6, 7, 9, 56, 92 67 */
    A.push_back(67);  /* 6, 7, 9, 56, 92 67 67 */
    A.push_back(67);  /* 6, 7, 9, 56, 92 67 67 67 67 */
    A.push_back(67);  /* 6, 7, 9, 56, 92 67 67 67 67 67 */
    A.push_back(100); /* 6, 7, 9, 56, 92 67 67 67 67 67 100*/

    /* lower_bound & upper_bound -> O(logN) */
    vector<int>::iterator it1 = lower_bound(A.begin(), A.end(), 67); // first iterator >=
    auto it4 = lower_bound(A.begin(), A.end(), 67);                  //shorthand
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 67); // first iterator >
    auto it5 = upper_bound(A.begin(), A.end(), 67);                  //shorthand

    cout << *it1 << " " << *it2 << endl;
    cout << *it4 << " " << *it5 << endl;
    cout << it2 - it1 << endl; //4

    sort(A.begin(), A.end(), f);

    vector<int>::iterator it3;
    for (it3 = A.begin(); it3 != A.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for (int x : A)
    {
        cout << x << " ";
    }
    cout << endl;
}