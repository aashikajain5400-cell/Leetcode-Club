/*
DATE: 18/11/2026

PROBLEM: Reverse String
LINK: https://leetcode.com/problems/reverse-string/

PROBLEM STATEMENT:
Given character array ko reverse karna hai.
String ko in-place reverse karna hai, yani extra array
use nahi karna hai.

INSIGHTS GAINED FROM THIS QUESTION:

1. Hum two pointers use karenge: i aur j.
2. i starting index (0) par hoga.
3. j last index par hoga.
4. Dono positions ke characters ko swap karenge.
5. Har swap ke baad i ko aage aur j ko peeche move karenge.
6. Jab i >= j ho jayega, reversing complete ho jayegi.

Example:
Input:  h e l l o
Output: o l l e h

IMPORTANT:
temp variable ek character temporarily store karta hai,
taaki swapping ke time koi character lose na ho.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
};

int main() {
    int n;
    cin >> n;

    vector<char> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    Solution obj;
    obj.reverseString(s);

    for (int i = 0; i < n; i++) {
        cout << s[i];
    }

    return 0;
}