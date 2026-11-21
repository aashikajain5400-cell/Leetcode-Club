
/*
 * DATE: 15/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/running-sum-of-1d-array/
 *
 * PROBLEM STATEMENT:
 * Given an array nums, calculate the running sum.
 *
 * Running sum at index i is the sum of all elements
 * from index 0 to index i.
 *
 * Example:
 * Input: [1, 2, 3, 4]
 * Output: [1, 3, 6, 10]
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 * Understanding:
 * - Sabse pehle array ke elements input liye.
 * - For loop ko index 1 se start kiya.
 * - Har element mein uske previous element ka sum add kiya.
 * - nums[i] = nums[i] + nums[i-1] ka matlab hai
 *   current element mein previous running sum add karna.
 * - Pehla element same rehta hai kyunki uske pehle
 *   koi element nahi hota.
 * - Aise hi loop complete hone tak sum update hota rehta hai.
 * - Finally updated array return kar diya.
 *
 * __________________________________________________
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = s.runningSum(nums);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}
