/*
 * DATE: 09/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/length-of-last-word/
 * PROBLEM STATEMENT:
 * 58. Length of Last Word
    Easy
    Topics
    premium lock icon
    Companies
    Given a string s consisting of words and spaces, return the length of the last word in the string.

    A word is a maximal substring consisting of non-space characters only.

    

    Example 1:

    Input: s = "Hello World"
    Output: 5
    Explanation: The last word is "World" with length 5.
    Example 2:

    Input: s = "   fly me   to   the moon  "
    Output: 4
    Explanation: The last word is "moon" with length 4.
    Example 3:

    Input: s = "luffy is still joyboy"
    Output: 6
    Explanation: The last word is "joyboy" with length 6.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 1. to traverse a string from the end to find the last word.
 * 2. Understood how to skip trailing spaces before counting the length of the last word
 * 3. If a character is not a space, start counting the length of the last word until a space is encountered or the beginning of the string is reached.
 * 4. If the string is empty or contains only spaces, return 0.
 * 
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
    int lengthOfLastWord(string s) {
        for (int i = s.length() - 1 ; i >= 0 ; i--){
            if(s[i] != ' '){
                int count = 0;
                while(i >=0 && s[i]!= ' '){
                    count++;
                    i--;
                }
                return count;
            }
        }
        return 0;
    }
};
