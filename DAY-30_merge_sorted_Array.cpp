
/*
 * DATE: 11/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/merge-sorted-array/
 *
 * PROBLEM STATEMENT:
 * Given two sorted arrays nums1 and nums2,
 * merge them into one sorted array.
 *
 * The final sorted array must be stored inside nums1.
 * The extra zero elements in nums1 should be ignored.
 *
 * __________________________________________________
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 *
 * How I approached it:
 * - Initially, use three pointers.
 * - i points to the last valid element of nums1.
 * - j points to the last element of nums2.
 * - k points to the last position of nums1.
 * - Compare nums1[i] and nums2[j].
 * - Place the larger element at nums1[k].
 * - Move the corresponding pointer backwards.
 * - Decrease k after every insertion.
 * - Continue until one array becomes empty.
 * - If nums2 still has elements, copy them into nums1.
 * - The final array will be sorted in nums1.
 *
 * __________________________________________________
 */



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main() {
    Solution s;

    int m, n;
    cin >> m;

    vector<int> nums1(m);
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cin >> n;

    vector<int> nums2(n);
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }

    nums1.resize(m + n);

    s.merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    cout << endl;

    return 0;
}
