/*
 * DATE: 14/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/description/?envType=daily-question&envId=2026-10-14
 * PROBLEM STATEMENT:3723. Maximize Sum of Squares of Digits
Solved
Medium
Topics
premium lock icon
Companies
Hint
You are given two positive integers num and sum.

A positive integer n is good if it satisfies both of the following:

The number of digits in n is exactly num.
The sum of digits in n is exactly sum.
The score of a good integer n is the sum of the squares of digits in n.

Return a string denoting the good integer n that achieves the maximum score. If there are multiple possible integers, return the maximum ​​​​​​​one. If no such integer exists, return an empty string.

 

Example 1:

Input: num = 2, sum = 3

Output: "30"

Explanation:

There are 3 good integers: 12, 21, and 30.

The score of 12 is 12 + 22 = 5.
The score of 21 is 22 + 12 = 5.
The score of 30 is 32 + 02 = 9.
The maximum score is 9, which is achieved by the good integer 30. Therefore, the answer is "30".

Example 2:

Input: num = 2, sum = 17

Output: "98"

Explanation:

There are 2 good integers: 89 and 98.

The score of 89 is 82 + 92 = 145.
The score of 98 is 92 + 82 = 145.
The maximum score is 145. The maximum good integer that achieves this score is 98. Therefore, the answer is "98".

Example 3:

Input: num = 1, sum = 10

Output: ""

Explanation:

There are no integers that have exactly 1 digit and whose digits sum to 10. Therefore, the answer is "".
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION: greedy algorithm se solve karna tha, jismein pehle maximum digit ko fill karna tha aur phir uske baad remaining sum ko fill karna tha. Agar sum > 9*num ho jaaye toh return "" karna tha.
 * How I approached it:

Initially, mujhe samajhne mein difficulty hui ki maximum digit 9 hi kyun choose kar rahe hain.
Phir samjha ki decimal number system mein largest possible single digit 9 hota hai.
Observe kiya ki fixed digit sum ke liye larger digits use karne se sum of squares maximize hota hai.
Isliye Greedy Approach use ki, jisme har step par largest possible digit choose karte hain.
min(9, sum) se decide kiya ki current digit kya hoga.
sum -= digit se remaining sum update hota hai, jise next iteration mein use karte hain.
Agar sum > 9 * num hai, toh valid number banana impossible hai.
Answer ko string mein construct kiya, taaki large numbers bhi handle ho sakein.


Key Learning
Understood how Greedy Algorithms make locally optimal choices.
Learned how variables get updated inside loops.
Understood the use of min() and char('0' + digit).
Explored how Brute Force, Backtracking, and DP could also approach this problem.
Learned that recognizing mathematical patterns can help avoid unnecessary computations.

Time Complexity: O(num)
Space Complexity: O(num)

Takeaway: Instead of checking every possible number, I learned how to recognize a Greedy pattern and directly construct the optimal answer.
SAME QUESTION KO 3 APPROACH ME SIKHA MAINLY 
1. LEETCODE 
2. NORMAL LIKHA 
3. USING RECURSION 
__________________________________________________
 * 
 * __________________________________________________
 *
 */


#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num, sum;
    cin >> num >> sum;

    if (sum > 9 * num || sum < 1) {
        cout << "";
        return 0;
    }

    string ans = "";

    for (int i = 0; i < num; i++) {
        int digit = min(9, sum);
        ans += char('0' + digit);
        sum -= digit;
    }

    cout << ans;

    return 0;
}




// LEETCODE SOLUTION 

// class Solution {
// public:
//     string maxSumOfSquares(int num, int sum) {
//         if (sum > 9 * num || sum < 1)
//             return "";

//         string ans = "";

//         for (int i = 0; i < num; i++) {
//             int digit = min(9, sum);
//             ans += char('0' + digit);
//             sum -= digit;
//         }

//         return ans;
//     }
// };










// USING RECURSION 


// #include <bits/stdc++.h>
// using namespace std;

// string solve(int num, int sum) {
//     if (num == 0)
//         return "";

//     int digit = min(9, sum);

//     return char('0' + digit) + solve(num - 1, sum - digit);
// }

// int main() {
//     int num, sum;
//     cin >> num >> sum;

//     if (sum > 9 * num || sum < 1) {
//         cout << "";
//         return 0;
//     }

//     cout << solve(num, sum);

//     return 0;
// }
