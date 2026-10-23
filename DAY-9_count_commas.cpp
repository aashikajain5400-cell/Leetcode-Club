/*
 * DATE: 21/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/count-commas-in-range/
 * PROBLEM STATEMENT:
 * You are given an integer n.

Return the total number of commas used when writing all integers from [1, n] (inclusive) in standard number formatting.

In standard formatting:

A comma is inserted after every three digits from the right.
Numbers with fewer than 4 digits contain no commas.
 

Example 1:

Input: n = 1002

Output: 3

Explanation:

The numbers "1,000", "1,001", and "1,002" each contain one comma, giving a total of 3.

Example 2:

Input: n = 998

Output: 0

Explanation:

All numbers from 1 to 998 have fewer than four digits. Therefore, no commas are used.
 * __________________________________________________
 * 
 * __________________________________________________
 
 */



#include <iostream>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if (n < 1000)
            return 0;

        return n - 999;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.countCommas(n) << endl;

    return 0;
}



