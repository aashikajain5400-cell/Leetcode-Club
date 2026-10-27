/*
 * DATE: 28/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/sqrtx/description/
 * PROBLEM STATEMENT:Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

    You must not use any built-in exponent function or operator.

    For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
    

    Example 1:

    Input: x = 4
    Output: 2
    Explanation: The square root of 4 is 2, so we return 2.
    Example 2:

    Input: x = 8
    Output: 2
    Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Binary Search can be used to find an answer, not just search an array.
 * Store the last valid answer when an exact match is not guaranteed.
 * Use long long to prevent overflow during multiplication.
 * Integer square root means finding the largest integer whose square is <= x.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */


#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if ((long long)mid * mid <= x) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    int x;
    cin >> x;

    Solution obj;
    cout << obj.mySqrt(x);

    return 0;
}
