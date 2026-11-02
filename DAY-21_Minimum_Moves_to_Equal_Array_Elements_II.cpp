/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/?envType=daily-question&envId=2026-11-02
 * PROBLEM STATEMENT:Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

    In one move, you can increment or decrement an element of the array by 1.

    Test cases are designed so that the answer will fit in a 32-bit integer.

    

    Example 1:

    Input: nums = [1,2,3]
    Output: 2
    Explanation:
    Only two moves are needed (remember each move increments or decrements one element):
    [1,2,3]  =>  [2,2,3]  =>  [2,2,2]
    Example 2:

    Input: nums = [1,10,2,9]
    Output: 16
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Sabse pehle sort() ka use karke array ke elements ko increasing order mein arrange kiya.
 * Uske baad middle element find kiya, kyunki median choose karne se minimum moves milte hain.
 * Ek for loop lagaya taaki array ke har element ko check kar sakein.
 * abs() ka use karke har element aur median ke beech ka absolute difference nikala.
 * Saare differences ko ans mein add kiya, jo total moves batata hai.
 * Finally, ans return kar diya, jo minimum moves hain.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int mid = nums.size() / 2;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans += abs(nums[i] - nums[mid]);
        }

        return ans;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    int result = solution.minMoves2(nums);
    cout << "Minimum moves to equal array elements: " << result << endl;

    return 0;
}