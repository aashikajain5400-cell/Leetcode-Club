/*
DATE: 21/11/2026

PROBLEM: 1295. Find Numbers with Even Number of Digits
LINK: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

PROBLEM STATEMENT:
Array mein count karna hai ki kitne numbers mein
even number of digits hain.

INSIGHTS GAINED FROM THIS QUESTION:

1. Sabse pehle count = 0 rakhenge.
2. First loop se array ka har number select karenge.
3. digits = 0 rakhenge, jo digits count karega.
4. while loop mein number ko 10 se divide karenge.
5. Har division par digits ko 1 increase karenge.
6. Jab number 0 ho jayega, loop stop ho jayega.
7. Agar digits % 2 == 0 hai, toh count increase karenge.
8. Finally total count return kar denge.

IMPORTANT:
num = num / 10 last digit remove karta hai.
digits % 2 == 0 check karta hai ki digits even hain ya nahi.

Example:
12   = 2 digits (Even)
345  = 3 digits (Odd)
7896 = 4 digits (Even)

Answer = 2
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digits = 0;

            while (num > 0) {
                digits++;
                num = num / 10;
            }

            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
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

    cout << obj.findNumbers(nums);

    return 0;
}