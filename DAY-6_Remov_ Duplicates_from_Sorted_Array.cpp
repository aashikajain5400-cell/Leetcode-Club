/*
 * DATE: 18/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * PROBLEM STATEMENT:
 * 26. Remove Duplicates from Sorted Array
    Solved
    Easy
    Topics
    premium lock icon
    Companies
    Hint
    Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

    Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

    The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

    Custom Judge:

    The judge will test your solution with the following code:

    int[] nums = [...]; // Input array
    int[] expectedNums = [...]; // The expected answer with correct length

    int k = removeDuplicates(nums); // Calls your implementation

    assert k == expectedNums.length;
    for (int i = 0; i < k; i++) {
        assert nums[i] == expectedNums[i];
    }
    If all assertions pass, then your solution will be accepted.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Used i to track the last unique element and j to traverse the array.
 * Compared nums[i] with nums[j] to identify new unique elements.
 * Whenever a different element was found, incremented i and updated nums[i].
 * Modified the array in-place without using extra space.
 * Returned i + 1 to get the total number of unique elements.
 * 
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */



#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }

        return nums.empty() ? 0 : i + 1;
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
    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}