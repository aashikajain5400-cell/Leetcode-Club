/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/plus-one/description/
 * PROBLEM STATEMENT:
 * You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

    Increment the large integer by one and return the resulting array of digits.
    Example 1:
    Input: digits = [1,2,3]
    Output: [1,2,4]
    Explanation: The array represents the integer 123.
    Incrementing by one gives 123 + 1 = 124.
    Thus, the result should be [1,2,4].
    Example 2:

    Input: digits = [4,3,2,1]
    Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
    Incrementing by one gives 4321 + 1 = 4322.
    Thus, the result should be [4,3,2,2].
    Example 3:

    Input: digits = [9]
    Output: [1,0]
    Explanation: The array represents the integer 9.
    Incrementing by one gives 9 + 1 = 10.
    Thus, the result should be [1,0].
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 
1. Learned to traverse an array from right to left.
2. Understood how to handle carry when adding 1 to a digit.
3. If a digit is less than 9, increment it by 1 and return the array.
4. If a digit is 9, replace it with 0 and continue to the previous digit.
5. If all digits are 9, insert 1 at the beginning of the array.
6. Learned to handle large numbers without converting them into an integer.

Approach: Greedy + Array Traversal

 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
int main(){
    Solution sol;
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }
    vector<int> result = sol.plusOne(digits);
    for (int digit : result) {
        cout << digit << " ";
    }
    return 0;
}