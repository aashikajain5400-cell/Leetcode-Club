
/*
 * DATE: 25/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/build-array-from-permutation/
 *
 * PROBLEM STATEMENT:
 * Given an array nums, create a new array ans where
 * ans[i] = nums[nums[i]] and return the array.
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * 1. Learned how to access an array using another
 *    array element as an index.
 * 2. Understood nested indexing: nums[nums[i]].
 * 3. Learned to use push_back() to add elements
 *    into a vector.
 *
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {5, 0, 1, 2, 3, 4};
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
