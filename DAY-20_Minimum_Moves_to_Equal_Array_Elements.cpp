/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/?envType=daily-question&envId=2026-11-01
 * PROBLEM STATEMENT:453. Minimum Moves to Equal Array Elements
    Solved
    Medium
    Topics
    premium lock icon
    Companies
    Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

    In one move, you can increment n - 1 elements of the array by 1.

    

    Example 1:

    Input: nums = [1,2,3]
    Output: 3
    Explanation: Only three moves are needed (remember each move increments two elements):
    [1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
    Example 2:

    Input: nums = [1,1,1]
    Output: 0
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * First, I observed that in every move, we increment n-1 elements by 1, which is equivalent to decreasing the remaining one element by 1.
 * So, instead of actually performing multiple operations, I decided to make all elements equal to the minimum element.
 * I calculated the sum of all array elements and found the minimum element using a loop.
 * Finally, I used the formula sum - (n * minimum) to calculate the minimum number of moves required
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
    int minMoves(vector<int>& nums) {
        int sum = 0;
        int mini = nums[0];

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(nums[i] < mini) {
                mini = nums[i];
            }
        }

        return sum - (nums.size() * mini);
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int result = solution.minMoves(nums);
    cout << result << endl;

    return 0;
}