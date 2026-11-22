/*
 * DATE: 22/11/2026
 *
 * PROBLEM LINK: 
 * PROBLEM STATEMENT:
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
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