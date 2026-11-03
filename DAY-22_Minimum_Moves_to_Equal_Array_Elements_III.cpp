/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/?envType=daily-question&envId=2026-11-03
 * PROBLEM STATEMENT:[**3736. Minimum Moves to Equal Array Elements III**](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/)

    Easy

    Topics

    [premium lock icon](https://leetcode.com/_next/static/images/lock-a6627e2c7fa0ce8bc117c109fb4e567d.svg)Companies

    Hint

    You are given an integer array `nums`.

    In one move, you may **increase** the value of any single element `nums[i]` by 1.

    Return the **minimum total** number of **moves** required so that all elements in `nums` become **equal**.



    **Example 1:**

    **Input:** nums = [2,1,3]

    **Output:** 3

    **Explanation:**

    To make all elements equal:

    - Increase `nums[0] = 2` by 1 to make it 3.
    - Increase `nums[1] = 1` by 1 to make it 2.
    - Increase `nums[1] = 2` by 1 to make it 3.

    Now, all elements of `nums` are equal to 3. The minimum total moves is `3`.

    **Example 2:**

    **Input:** nums = [4,4,5]

    **Output:** 2

    **Explanation:**

    To make all elements equal:

    - Increase `nums[0] = 4` by 1 to make it 5.
    - Increase `nums[1] = 4` by 1 to make it 5.

    Now, all elements of `nums` are equal to 5. The minimum total moves is `2`.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Sabse pehle max_element() se array ka maximum element find kiya, kyunki hum elements ko sirf increase kar sakte hain.
 * Maximum element ko target banaya, taaki baaki saare elements uske equal ho sakein.
 * for loop se har element ka maximum element ke saath difference calculate kiya.
 * Saare differences ko ans mein add kiya, kyunki har difference utne required moves represent karta hai.
 * Finally, total minimum moves return kar diye.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            ans += maxi - nums[i];
        }

        return ans;
    }
};
int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& num : nums) {
        cin >> num;
    }
    int result = sol.minMoves(nums);
    cout << "Minimum moves to equal array elements: " << result << endl;

    return 0;
}