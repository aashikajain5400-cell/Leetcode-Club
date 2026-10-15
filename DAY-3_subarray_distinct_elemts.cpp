/*
 * DATE: 15/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/?envType=daily-question&envId=2026-10-15
 * PROBLEM STATEMENT:
 * 
 * 
 * 2913. Subarrays Distinct Element Sum of Squares I
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a 0-indexed integer array nums.

The distinct count of a subarray of nums is defined as:

Let nums[i..j] be a subarray of nums consisting of all the indices from i to j such that 0 <= i <= j < nums.length. Then the number of distinct values in nums[i..j] is called the distinct count of nums[i..j].
Return the sum of the squares of distinct counts of all subarrays of nums.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,2,1]
Output: 15
Explanation: Six possible subarrays are:
[1]: 1 distinct value
[2]: 1 distinct value
[1]: 1 distinct value
[1,2]: 2 distinct values
[2,1]: 2 distinct values
[1,2,1]: 2 distinct values
The sum of the squares of the distinct counts in all subarrays is equal to 12 + 12 + 12 + 22 + 22 + 22 = 15.
Example 2:

Input: nums = [1,1]
Output: 3
Explanation: Three possible subarrays are:
[1]: 1 distinct value
[1]: 1 distinct value
[1,1]: 1 distinct value
The sum of the squares of the distinct counts in all subarrays is equal to 12 + 12 + 12 = 3.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Is problem mein maine seekha ki array ke saare possible subarrays generate karke unke distinct elements ke count ka square kaise calculate karte hain.

How I approached it:

Pehle two nested loops use kiye, jahan i starting index aur j ending index decide karta hai.

j = i se start kiya kyunki subarray ka ending index starting index se pehle nahi ho sakta.

set<int> s use kiya taaki duplicate elements automatically ignore ho jayein.

s.insert(nums[j]) se current subarray ko ek-ek element se extend kiya.

s.size() se distinct elements ka count nikala.

ans += count * count se har subarray ke distinct count ka square total answer mein add kiya.

New Concepts Learned:

Nested Loops → All possible subarrays generate karne ke liye.

Set → Unique elements store karta hai aur duplicates ignore karta hai.

s.insert() → Set mein element add karta hai.

s.size() → Distinct elements ki total count return karta hai.

Running Sum → ans += se results accumulate kar sakte hain.
 * 
 * 
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

#include <iostream>
#include <vector>
#include<set>
using namespace std;
int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            set<int> s;

            for(int j = i; j < n; j++) {
                s.insert(nums[j]);

                int count = s.size();
                ans += count * count;
            }
        }

        return ans;
    }
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<sumCounts(nums)<<endl;

    return 0;
}