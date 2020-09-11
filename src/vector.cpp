#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {56, 7, 92, 6, 9};

    cout << A[4] << endl; //9

    sort(A.begin(), A.end()); // O(nlog(n))
    /* 6, 7, 9, 56, 92 */
    /* sort mutates the vector */

    cout << A[4] << endl; //92

    /* Binary Search - O(logN) */
    bool present = binary_search(A.begin(), A.end(), 7);

    std::cout << std::boolalpha << present << endl; // 1 --- true

    present = binary_search(A.begin(), A.end(), 3);

    std::cout << std::boolalpha << present << endl; //0 --- false
}