/*
 * DATE: 20/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/sum-of-sortable-integers/?envType=daily-question&envId=2026-10-20
 * PROBLEM STATEMENT:3886. Sum of Sortable Integers
    Solved
    Hard
    Topics
    premium lock icon
    Companies
    Hint
    You are given an integer array nums of length n.

    An integer k is called sortable if k divides n and you can sort nums in non-decreasing order by sequentially performing the following operations:

    Partition nums into consecutive subarrays of length k.
    Cyclically rotate each subarray independently any number of times to the left or to the right.
    Return an integer denoting the sum of all possible sortable integers k.

    

    Example 1:

    Input: nums = [3,1,2]

    Output: 3

    Explanation:​​​​​​​

    For n = 3, possible divisors are 1 and 3.
    For k = 1: each subarray has one element. No rotation can sort the array.
    For k = 3: the single subarray [3, 1, 2] can be rotated once to produce [1, 2, 3], which is sorted.
    Only k = 3 is sortable. Hence, the answer is 3.
    Example 2:

    Input: nums = [7,6,5]

    Output: 0

    Explanation:

    For n = 3, possible divisors are 1 and 3.
    For k = 1: each subarray has one element. No rotation can sort the array.
    For k = 3: the single subarray [7, 6, 5] cannot be rotated into non-decreasing order.
    No k is sortable. Hence, the answer is 0.
    Example 3:

    Input: nums = [5,8]

    Output: 3

    Explanation:​​​​​​​

    For n = 2, possible divisors are 1 and 2.
    Since [5, 8] is already sorted, every divisor is sortable. Hence, the answer is 1 + 2 = 3.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 
 *  Used divisors of n to find possible block sizes k.
    Used a lambda function check(k) to verify each block size.
    Learned that circular rotation preserves the relative order of elements, even after multiple rotations.
    Used drops to count how many times an element is greater than its next circular element.
    If drops > 1, the block cannot be sorted using circular rotations.
    Used mn, mx, and prevMax to ensure that all blocks maintain the correct global sorted order.
    Used the square root optimization to check divisors efficiently.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

class Solution {
public:
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        auto check = [&](int k) {
            int prevMax = INT_MIN;

            for (int i = 0; i < n; i += k) {
                int mn = nums[i];
                int mx = nums[i];
                int drops = 0;

                for (int j = i; j < i + k; j++) {
                    mn = min(mn, nums[j]);
                    mx = max(mx, nums[j]);

                    int next = i + (j - i + 1) % k;

                    if (nums[j] > nums[next])
                        drops++;
                }

                if (drops > 1 || prevMax > mn)
                    return false;

                prevMax = mx;
            }

            return true;
        };

        for (int k = 1; k <= n / k; k++) {
            if (n % k == 0) {
                if (check(k))
                    ans += k;

                if (k != n / k && check(n / k))
                    ans += n / k;
            }
        }

        return ans;
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<s.sortableIntegers(nums)<<endl;

}
