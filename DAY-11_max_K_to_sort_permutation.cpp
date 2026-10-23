/*
 * DATE: 23/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/maximum-k-to-sort-a-permutation/description/?envType=daily-question&envId=2026-10-23
 * PROBLEM STATEMENT:You are given an integer array nums of length n, where nums is a permutation of the numbers in the range [0..n - 1].

    You may swap elements at indices i and j only if nums[i] AND nums[j] == k, where AND denotes the bitwise AND operation and k is a non-negative integer.

    Return the maximum value of k such that the array can be sorted in non-decreasing order using any number of such swaps. If nums is already sorted, return 0.

    

    Example 1:

    Input: nums = [0,3,2,1]

    Output: 1

    Explanation:

    Choose k = 1. Swapping nums[1] = 3 and nums[3] = 1 is allowed since nums[1] AND nums[3] == 1, resulting in a sorted permutation: [0, 1, 2, 3].

    Example 2:

    Input: nums = [0,1,3,2]

    Output: 2

    Explanation:

    Choose k = 2. Swapping nums[2] = 3 and nums[3] = 2 is allowed since nums[2] AND nums[3] == 2, resulting in a sorted permutation: [0, 1, 2, 3].

    Example 3:

    Input: nums = [3,2,1,0]

    Output: 0

    Explanation:

    Only k = 0 allows sorting since no greater k allows the required swaps where nums[i] AND nums[j] == k.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * hume maximum k find karna hai jisse given swap condition follow karke array sort ho sake.
 * Maine observe kiya ki sorted permutation mein har element apne correct index par hota hai, isliye nums[i] != i se misplaced elements check kiye.
 * Actual swapping karne ke instead maine socha ki sirf misplaced elements par Bitwise AND apply karke answer find kar sakte hain.
 * Starting mein ans = -1 initialize kiya aur jab first misplaced element mila toh uski value ans mein store kar di.
 * Uske baad ans &= nums[i] use kiya taaki baaki misplaced elements ka cumulative Bitwise AND calculate ho sake.
 * Agar array already sorted hai, toh koi misplaced element nahi milega, isliye answer 0 return kiya.
 * Is problem se mujhe samajh aaya ki har sorting problem mein actual sorting ya swapping zaroori nahi hoti. Kabhi-kabhi simple observation aur bitwise operations se bhi efficiently solve kar sakte hain.
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
    int sortPermutation(vector<int>& nums) {
        int ans = -1;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i) {
                if(ans == -1)
                    ans = nums[i];
                else
                    ans &= nums[i];
            }
        }

        return ans == -1 ? 0 : ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.sortPermutation(nums) << endl;

    return 0;
}
