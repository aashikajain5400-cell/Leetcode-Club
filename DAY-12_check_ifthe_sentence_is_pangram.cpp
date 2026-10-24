/*
 * DATE: 24/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/check-if-the-sentence-is-pangram/?envType=problem-list-v2&envId=prshgx6i
 * PROBLEM STATEMENT:A pangram is a sentence where every letter of the English alphabet appears at least once.

    Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

    

    Example 1:

    Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
    Output: true
    Explanation: sentence contains at least one of every letter of the English alphabet.
    Example 2:

    Input: sentence = "leetcode"
    Output: false
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Sabse pehle maine Pangram ka meaning samjha. Pangram ek aisa sentence hota hai jisme English alphabet ke saare 26 letters (a–z) kam se kam ek baar present hote hain.
    Uske baad maine set use karne ka approach socha, kyunki set duplicate characters ko automatically remove kar deta hai.
    Ek set<char> banaya jo unique characters store karega.
    Sentence ke har character ko traverse karke set mein insert kiya.
    Agar koi character repeat hota hai, toh set usse dobara store nahi karega.
    Last mein set ka size check kiya.
    Agar size 26 hai toh true return kiya, otherwise false.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

#include <set>
#include <iostream>
#include <string>

using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;

        for(char ch : sentence) {
            st.insert(ch);
        }

        return st.size() == 26;
    }
};
int main() {
    Solution s;
    string sentence;
    cin>> sentence;
    if(s.checkIfPangram(sentence)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}
