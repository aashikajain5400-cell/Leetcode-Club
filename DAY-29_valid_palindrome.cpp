/*
 * DATE: 10/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/valid-palindrome/
 *
 * PROBLEM STATEMENT:
 * Given a string s, check whether it is a palindrome
 * after converting uppercase letters into lowercase
 * and removing all non-alphanumeric characters.
 *
 * Return true if it is a palindrome, otherwise false.
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 * How I approached it:
 * - Initially, create an empty string ans.
 * - Traverse the original string character by character.
 * - Use isalnum() to check whether a character
 *   is a letter or a number.
 * - Use tolower() to convert uppercase letters
 *   into lowercase.
 * - Store only valid characters in ans.
 * - Use two pointers: left at the beginning
 *   and right at the end of the string.
 * - Compare both characters.
 * - If they are different, return false.
 * - If they match, move left forward and right backward.
 * - If all characters match, return true.
 *
 * __________________________________________________
 */


#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }

        int left = 0;
        int right = ans.length() - 1;

        while (left < right) {
            if (ans[left] != ans[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution s;
    string str;

    getline(cin, str);

    if (s.isPalindrome(str)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
