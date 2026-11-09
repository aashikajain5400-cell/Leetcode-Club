/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/ugly-number/description/
 * PROBLEM STATEMENT:
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
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