/*
 * DATE: 17/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/minimum-swaps-to-sort-by-digit-sum/description/?envType=daily-question&envId=2026-10-17
 * PROBLEM STATEMENT:
 * 
 * You are given an array nums of distinct positive integers. You need to sort the array in increasing order based on the sum of the digits of each number. If two numbers have the same digit sum, the smaller number appears first in the sorted order.

Return the minimum number of swaps required to rearrange nums into this sorted order.

A swap is defined as exchanging the values at two distinct positions in the array.

 

Example 1:

Input: nums = [37,100]

Output: 1

Explanation:

Compute the digit sum for each integer: [3 + 7 = 10, 1 + 0 + 0 = 1] → [10, 1]
Sort the integers based on digit sum: [100, 37]. Swap 37 with 100 to obtain the sorted order.
Thus, the minimum number of swaps required to rearrange nums is 1.
Example 2:

Input: nums = [22,14,33,7]

Output: 0

Explanation:

Compute the digit sum for each integer: [2 + 2 = 4, 1 + 4 = 5, 3 + 3 = 6, 7 = 7] → [4, 5, 6, 7]
Sort the integers based on digit sum: [22, 14, 33, 7]. The array is already sorted.
Thus, the minimum number of swaps required to rearrange nums is 0.
Example 3:

Input: nums = [18,43,34,16]

Output: 2

Explanation:

Compute the digit sum for each integer: [1 + 8 = 9, 4 + 3 = 7, 3 + 4 = 7, 1 + 6 = 7] → [9, 7, 7, 7]
Sort the integers based on digit sum: [16, 34, 43, 18]. Swap 18 with 16, and swap 43 with 34 to obtain the sorted order.
Thus, the minimum number of swaps required to rearrange nums is 2.
 

Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 109
nums consists of distinct positive integers.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 
 * 
 * digit sum ke basis par sorting aur cycle detection se minimum swaps kaise calculate karte hain.

How I approached it:

digitSum() function se har number ke digits ka sum nikala.

vector<pair<int,int>> se number aur uska original index store kiya.

Custom sort() use kiya jo digit sum ke according numbers arrange karta hai.

Same digit sum hone par smaller number ko pehle rakha.

visited array se already processed indices track kiye.

Cycle detection se misplaced elements identify kiye.

swaps += count - 1 se minimum swaps calculate kiye.

New Concepts Learned:

Pair → Number aur original index store karna.

Custom Sorting → Apni conditions ke according sort karna.

Visited Array → Repeated processing avoid karna.

Cycle Detection → Minimum swaps efficiently calculate karna.

 * __________________________________________________
 * 
 * __________________________________________________
 *
 */


#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {
public:
    int digitSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++)
            arr.push_back({nums[i], i});

        sort(arr.begin(), arr.end(), [&](auto a, auto b) {
            int x = digitSum(a.first);
            int y = digitSum(b.first);

            if (x == y) return a.first < b.first;
            return x < y;
        });

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || arr[i].second == i)
                continue;

            int j = i, count = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = arr[j].second;
                count++;
            }

            swaps += count - 1;
        }

        return swaps;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    Solution obj;
    cout << obj.minSwaps(nums) << endl;

    return 0;
}
