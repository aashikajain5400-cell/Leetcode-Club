/*
 * DATE: 26/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/power-of-two/description/
 * PROBLEM STATEMENT:Given an integer `n`, return *`true` if it is a power of two. Otherwise, return `false`*.
An integer `n` is a power of two, if there exists an integer `x` such that `n == 2x`.

**Example 1:**
**Input:** n = 1 **Output:** true **Explanation:&#x20;**&#x32;0 = 1&#x20;
**Example 2:**
**Input:** n = 16 **Output:** true **Explanation:&#x20;**&#x32;4 = 16&#x20;
**Example 3:**
**Input:** n = 3 **Output:** false
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:Learned two approaches to check whether a number is a power of two: division and bit manipulation.
    Understood that repeatedly dividing a power of two by 2 eventually gives 1.
    Learned that subtracting 1 from a power of two changes its only set bit to 0 and all lower bits to 1.
    Understood why 0 and negative numbers cannot be powers of two.
    Learned that 1 is a power of two because 2⁰ = 1.
    Improved understanding of binary representation and how bitwise operations can optimize solutions.
    Learned that bit manipulation reduces the time complexity from O(log n) to O(1).
 * __________________________________________________
 * 
 * __________________________________________________
 *
*/


#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n = n / 2;
        }

        return n == 1;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;

    if (obj.isPowerOfTwo(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
