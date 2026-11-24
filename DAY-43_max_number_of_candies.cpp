
/*
 * DATE: 24/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 *
 * PROBLEM STATEMENT:
 * Check whether each kid can have the greatest candies
 * after receiving all extraCandies.
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * 1. Find the maximum number of candies.
 * 2. Add extraCandies to each kid's candies.
 * 3. Compare the total with the maximum.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());

        vector<bool> ans;

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= mx) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> ans = obj.kidsWithCandies(candies, extraCandies);

    for (bool x : ans) {
        cout << (x ? "true" : "false") << " ";
    }

    return 0;
}
