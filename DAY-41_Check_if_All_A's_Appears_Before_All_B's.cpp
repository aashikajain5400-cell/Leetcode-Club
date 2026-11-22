/*
 * DATE: 22/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/?envType=daily-question&envId=2026-11-22
 * PROBLEM STATEMENT:
 * Given a string s consisting of only the characters 'a' and 'b', return true if every 'a' appears before every 'b' in the string. Otherwise, return false.
    Example 1:

    Input: s = "aaabbb"
    Output: true
    Explanation:
    The 'a's are at indices 0, 1, and 2, while the 'b's are at indices 3, 4, and 5.
    Hence, every 'a' appears before every 'b' and we return true.
    Example 2:

    Input: s = "abab"
    Output: false
    Explanation:
    There is an 'a' at index 2 and a 'b' at index 1.
    Hence, not every 'a' appears before every 'b' and we return false.
    Example 3:

    Input: s = "bbb"
    Output: true
    Explanation:
    There are no 'a's, hence, every 'a' appears before every 'b' and we return true.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Adjacent character checking can solve string problems easily.
 * We don't always need sorting or extra arrays.
 * Finding one invalid pattern ("ba") is enough to reject the entire string.
 * return false can stop the loop early.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool checkString(string s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == 'b' && s[i + 1] == 'a') {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    string s = "aaabbb";
    bool result = solution.checkString(s);
    cout << (result ? "true" : "false") << endl; // Output: true

    s = "abab";
    result = solution.checkString(s);
    cout << (result ? "true" : "false") << endl; // Output: false

    return 0;
}