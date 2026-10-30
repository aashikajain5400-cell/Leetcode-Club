/*
 * DATE: 30/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/xor-operation-in-an-array/description/
 * PROBLEM STATEMENT:You are given an integer n and an integer start.

    Define an array nums where nums[i] = start + 2 * i (0-indexed) and n == nums.length.

    Return the bitwise XOR of all elements of nums.

    

    Example 1:

    Input: n = 5, start = 0
    Output: 8
    Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
    Where "^" corresponds to bitwise XOR operator.
    Example 2:

    Input: n = 4, start = 3
    Output: 8
    Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 


 * Question mein given tha ki nums[i] = start + 2*i, isliye sabse pehle socha ki hume isi formula se array ke elements generate karne hain.
 * start array ka first element hoga aur 2*i add karne se har next element previous element se 2 zyada milega.
 * Isliye first for loop use kiya, taaki i = 0 se n-1 tak saare elements calculate karke vector mein store kar sakein.
 * Ab question mein saare elements ka XOR find karna tha, isliye result = 0 initialize kiya, kyunki 0 ^ x = x hota hai.
 * Second for loop se har element ko access kiya aur result = result ^ nums[i] se XOR calculate karte gaye.
 * XOR operation mein same bits ka result 0 aur different bits ka result 1 hota hai.
 * Finally, result mein saare elements ka combined XOR aa gaya, isliye use return kar diya.
 
 
 __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
#include <vector>
class Solution {
public:
    int xorOperation(int n, int start) {
        std::vector<int> nums(n);

        for (int i = 0; i < n; i++) {
            nums[i] = start + 2 * i;
        }

        int result = 0;

        for (int i = 0; i < n; i++) {
            result = result ^ nums[i];
        }

        return result;
    }
};
int main() {
    Solution solution;
    int n = 5;
    int start = 0;
    int result = solution.xorOperation(n, start);
    std::cout << "Result: " << result << std::endl; // Output: Result: 8
    return 0;
}
