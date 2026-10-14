#include <numeric>
#include <string>

/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
 * PROBLEM STATEMENT:1071. Greatest Common Divisor of Strings
Solved
Easy
Topics
premium lock icon
Companies
Hint
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"

Output: "ABC"

Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"

Output: "AB"

Example 3:

Input: str1 = "LEET", str2 = "CODE"

Output: ""

Example 4:

Input: str1 = "AAAAAB", str2 = "AAA"

Output: ""​​​​​​​

 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 
 * Is problem mein maine seekha ki two strings ka largest common repeating pattern kaise find karte hain.

How I approached it:
Pehle str1 + str2 == str2 + str1 check kiya to confirm ki common repeating pattern exist karta hai.
gcd(str1.size(), str2.size()) se maximum possible pattern length nikali.
str1.substr(0, g) se first g characters extract karke answer return kiya.
New Concepts Learned:
gcd() → Greatest Common Divisor find karta hai.
substr(start, length) → String ka specific portion extract karta hai.
String concatenation se repeating pattern check kar sakte hain.
Key Takeaway: Har substring manually check karne ke bajaye, GCD + string concatenation use karke efficiently solve karna seekha.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        std::size_t g = std::gcd(str1.size(), str2.size());

        return str1.substr(0, g);
    }
};