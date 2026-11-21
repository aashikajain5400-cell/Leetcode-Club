
/*
 * DATE: 12/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 *
 * PROBLEM STATEMENT:
 * Given two strings haystack and needle,
 * find the first occurrence of needle in haystack.
 *
 * Return the starting index if found,
 * otherwise return -1.
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 *
 * Understanding:
 * - Sabse pehle dono strings ki length nikali.
 * - Outer loop haystack ke har possible starting
 *   index ko check karta hai.
 * - Inner loop needle ke characters ko compare karta hai.
 * - Agar koi character match nahi hota,
 *   toh break karke next index par chale jaate hain.
 * - Agar j == m ho jaata hai, iska matlab
 *   needle ke saare characters match ho gaye.
 * - Isliye i return kar dete hain.
 * - Agar kahin bhi match nahi mila toh -1 return hota hai.
 *
 * __________________________________________________
 */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for (int i = 0; i <= n - m; i++) {
            int j;

            for (j = 0; j < m; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }

            if (j == m) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution s;

    string haystack, needle;

    cin >> haystack;
    cin >> needle;

    cout << s.strStr(haystack, needle) << endl;

    return 0;
}
