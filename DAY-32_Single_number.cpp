
/*
 * DATE: 13/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/single-number/
 *
 * PROBLEM STATEMENT:
 * Given a non-empty array of integers where every
 * element appears twice except one element.
 * Find the element that appears only once.
 *
 * The solution must have linear time complexity
 * and constant extra space.
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 * Understanding:
 * - Sabse pehle ans naam ka variable 0 se initialize kiya.
 * - Phir for loop ki help se array ke saare elements
 *   ko ek-ek karke traverse kiya.
 * - Har element par XOR (^) operation apply kiya.
 * - XOR mein same numbers ka result 0 hota hai.
 * - Jaise 2 ^ 2 = 0.
 * - Aur kisi number ka 0 ke saath XOR karne par
 *   wahi number milta hai.
 * - Isliye jo elements do baar aaye hain,
 *   woh automatically cancel ho jaate hain.
 * - Sirf single occurrence wala number bach jaata hai.
 * - Finally ans return kar dete hain.
 *
 * __________________________________________________
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }

        return ans;
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

    cout << s.singleNumber(nums) << endl;

    return 0;
}
