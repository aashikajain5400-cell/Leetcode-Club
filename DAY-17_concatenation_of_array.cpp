/*
 * DATE: 29/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/concatenation-of-array/description/
 * PROBLEM STATEMENT:Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

    Specifically, ans is the concatenation of two nums arrays.

    Return the array ans.

    

    Example 1:

    Input: nums = [1,2,1]
    Output: [1,2,1,1,2,1]
    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
    - ans = [1,2,1,1,2,1]
    Example 2:

    Input: nums = [1,3,2,1]
    Output: [1,3,2,1,1,3,2,1]
    Explanation: The array ans is formed as follows:
    - ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
    - ans = [1,3,2,1,1,3,2,1]

    
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * First, understood that the original array needs to be repeated twice.
 * Created an empty vector to store the result.
 * Used the outer loop to repeat the array two times.
 * Used the inner loop to traverse each element and add it using push_back().
 * returned the new array containing both copies.
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
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                ans.push_back(nums[j]);
            }
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.getConcatenation(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
