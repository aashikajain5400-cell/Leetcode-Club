/*
 * DATE: 22/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/description/
 * PROBLEM STATEMENT:
 * You are given an integer array nums of length n, where nums is a permutation of the integers from 0 to n - 1.

    You may perform only the following operations:

    Reverse the entire array.
    Rotate Left by One: Move the first element to the end of the array, and rest elements to left by one position.
    Return an integer denoting the minimum number of operations required to sort the array in increasing order. If it is not possible to sort the array using only the given operations, return -1.

    

    Example 1:

    Input: nums = [0,2,1]

    Output: 2

    Explanation:

    Rotate Left by one: [2, 1, 0]
    Reverse the array: [0, 1, 2]
    The array becomes sorted in 2 operations, which is minimal

    Example 2:

    Input: nums = [1,0,2]

    Output: 2

    Explanation:

    Reverse the array: [2, 0, 1]
    Rotate Left by one: [0, 1, 2]
    The array becomes sorted in 2 operations, which is minimal.

    Example 3:

    Input: nums = [2,0,1,3]

    Output: -1

    Explanation:

    It is impossible to reach [2, 0, 1, 3]. Thus, the answer is -1.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Learned how to check ascending and descending cyclic order in an array.
    Understood the use of modulo % for circular rotations.
    Learned how reversing and rotating an array affect its order.
    Used min() to calculate the minimum number of operations.
    Improved understanding of array manipulation and optimization.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */


#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        bool asc = true, desc = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (nums[0] + i) % n)
                asc = false;

            if (nums[i] != (nums[0] - i + n) % n)
                desc = false;
        }

        if (asc) {
            int k = nums[0];
            ans = min(ans, min((n - k) % n, k + 2));
        }

        if (desc) {
            int k = (nums[0] + 1) % n;
            ans = min(ans, 1 + min(k, n - k));
        }

        return ans == INT_MAX ? -1 : ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.minOperations(nums) << endl;

    return 0;
}

