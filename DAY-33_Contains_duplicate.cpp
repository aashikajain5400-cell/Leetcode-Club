
/*
 * DATE: 14/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/contains-duplicate/
 *
 * PROBLEM STATEMENT:
 * Given an integer array nums, return true if any
 * value appears at least twice.
 *
 * Return false if all elements are distinct.
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 * Understanding:
 * - Sabse pehle array ko sort kiya.
 * - Sorting ke baad same elements ek dusre ke paas
 *   aa jaate hain.
 * - Phir for loop ko index 1 se start kiya.
 * - Current element ko previous element se compare kiya.
 * - Agar dono equal hain, iska matlab duplicate present hai.
 * - Isliye true return kar diya.
 * - Agar poore array mein koi duplicate nahi mila,
 *   toh false return kar diya.
 *
 * __________________________________________________
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
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

    if (s.containsDuplicate(nums)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
