/*
 * DATE: 19/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/longest-common-prefix/description/
 * PROBLEM STATEMENT:
    Write a function to find the longest common prefix string amongst an array of strings.

    If there is no common prefix, return an empty string "".

    

    Example 1:

    Input: strs = ["flower","flow","flight"]
    Output: "fl"
    Example 2:

    Input: strs = ["dog","racecar","car"]
    Output: ""
    Explanation: There is no common prefix among the input strings.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * How I approached it:
    - Initially, consider the first string as the common prefix (ans).
    - Compare ans with each remaining string using find().
    - If find(ans) != 0, remove the last character using pop_back().
    - Repeat until the prefix matches the beginning of the current string.
    - Return the final common prefix.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */
#include <iostream>
#include<vector>
#include<string>

using namespace std;
class Solution{
    public:
    string longestcommonprefix(vector<string>&strs){
        if(strs.empty())return "";

        string ans = strs[0];
        for(int i = 0;i<strs.size();i++){
            while(strs[i].find(ans)!=0){
                ans.pop_back();
                if(ans.empty()){
                    return "";
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    int n;
    cin >> n;
    vector<string> strs(n);
    for(int i = 0;i<n;i++){
        cin >> strs[i];
    }
    cout << s.longestcommonprefix(strs) << endl;
}

