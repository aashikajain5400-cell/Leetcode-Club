/*
 * DATE: 25/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/search-insert-position/description/
 * PROBLEM STATEMENT:Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.
Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Is problem mein array already sorted tha, 
 * isliye maine Binary Search approach use ki.
 *  Sabse pehle low aur high pointers initialize kiye aur mid calculate kiya. 
 * Agar target mid par mila toh index return kar diya.
 *  Agar target bada tha toh right half mein search kiya, warna left half mein.
 *  Agar target nahi mila toh loop end hone par low return kiya, kyunki wahi correct insertion position hoti hai.
 * __________________________________________________
 * 
 * __________________________________________________
 *
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return low;
    }
};
int main(){
    Solution s;
    int n,target;
    cin >> target >> n;
    vector<int>nums(n);
    for (int i=0;i<n;i++) {
        cin>>nums[i];
    }
    cout<<s.searchInsert(nums, target)<<endl;
    return 0;
}