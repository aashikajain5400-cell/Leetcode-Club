/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/ugly-number/description/
 * PROBLEM STATEMENT:An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

    Given an integer n, return true if n is an ugly number.
    Example 1:
    Input: n = 6
    Output: true
    Explanation: 6 = 2 × 3
    Example 2:
    Input: n = 1
    Output: true
    Explanation: 1 has no prime factors.
    Example 3:
    Input: n = 14
    Output: false
    Explanation: 14 is not ugly since it includes the prime factor 7.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 1. Learned to check if a number is an ugly number by dividing it by 2, 3, and 5 until it becomes 1.
 * 2. If the number becomes 1 after dividing by 2, 3, and 5, then it is an ugly number.
 * 3. If the number is less than or equal to 0, then it is not an ugly number.
 * 4. If the number is not divisible by 2, 3, or 5, then it is not an ugly number.
 * 5. Learned to handle edge cases like 0 and negative numbers.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n = n / 2;
        }

        while (n % 3 == 0) {
            n = n / 3;
        }

        while (n % 5 == 0) {
            n = n / 5;
        }

        if (n == 1) {
            return true;
        }

        return false;
    }
};
int main() {
    Solution solution;
    int n;
    cin >> n;
    if (solution.isUgly(n)) {
        cout << n << " is an ugly number." << endl;
    } else {
        cout << n << " is not an ugly number." << endl;
    }
    return 0;
}