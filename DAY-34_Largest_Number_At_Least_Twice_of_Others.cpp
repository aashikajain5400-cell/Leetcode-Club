/*
DATE: 16/11/2026

PROBLEM: Largest Number At Least Twice of Others
LINK: https://leetcode.com/problems/largest-number-at-least-twice-of-others/

PROBLEM STATEMENT:
Array mein ek largest number find karna hai.
Check karna hai ki kya largest number baaki har number
se at least 2 times bada hai.

Agar condition true hai toh largest number ka index return karo,
otherwise -1 return karo.

INSIGHTS GAINED FROM THIS QUESTION:

1. Sabse pehle largest number ka index find karenge.
2. maxIndex = 0 ka matlab starting mein first element
   ko largest maan rahe hain.
3. First loop mein largest element ka index update karenge.
4. Second loop mein check karenge ki largest number
   baaki har element se 2 times bada hai ya nahi.
5. Agar kisi bhi element ke liye condition false hui,
   toh -1 return kar denge.
6. Agar sabke liye condition true hui,
   toh largest element ka index return karenge.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxIndex = 0;

        // Find largest element ka index
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }

        // Check largest is at least twice of others
        for (int i = 0; i < nums.size(); i++) {
            if (i != maxIndex && nums[maxIndex] < 2 * nums[i]) {
                return -1;
            }
        }

        return maxIndex;
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

    cout << obj.dominantIndex(nums);

    return 0;
}