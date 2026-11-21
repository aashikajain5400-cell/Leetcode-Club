/*
DATE: 17/11/2026

PROBLEM: Number of Good Pairs
LINK: https://leetcode.com/problems/number-of-good-pairs/

PROBLEM STATEMENT:
Array mein good pairs count karne hain.

Good Pair tab hota hai jab:
1. i < j hona chahiye.
2. nums[i] == nums[j] hona chahiye.

INSIGHTS GAINED FROM THIS QUESTION:

1. Hum do loops use karenge.
2. First loop i ko select karega.
3. Second loop j ko i ke next index se start karega.
4. Agar dono positions ke elements equal hain,
   toh count ko 1 increase kar denge.
5. Last mein total good pairs return kar denge.

Example:
nums = [1, 2, 3, 1, 1, 3]

Good pairs:
(0, 3), (0, 4), (3, 4), (2, 5)

Total = 4
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }

        return count;
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

    cout << obj.numIdenticalPairs(nums);

    return 0;
}