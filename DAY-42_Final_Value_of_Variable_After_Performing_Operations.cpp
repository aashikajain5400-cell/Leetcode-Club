
/*
 * DATE: 23/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 *
 * PROBLEM STATEMENT:
 * Given an array of strings containing operations
 * ++X, X++, --X and X--, find the final value of X.
 * Initially, X = 0.
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * 1. Learned to use a vector of strings.
 * 2. Practiced string comparison using ==.
 * 3. Used OR (||) operator to check multiple conditions.
 * 4. Understood increment (++) and decrement (--) operators.
 * 5. Learned to update a variable using a loop.
 *
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> operations(n);

    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    int X = 0;

    for (int i = 0; i < n; i++) {
        if (operations[i] == "++X" || operations[i] == "X++") {
            X++;
        }
        else {
            X--;
        }
    }

    cout << X;

    return 0;
}
