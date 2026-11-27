
/*
 * DATE: 27/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/shuffle-the-array/
 *
 * PROBLEM STATEMENT:
 * Rearrange an array of 2n elements in the order
 * [x1, y1, x2, y2, ..., xn, yn].
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * Learned how to access elements from two halves
 * of an array using indexing.
 * Used push_back() to insert elements alternately.
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<int> nums(size);

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans;

    for (int i = 0; i < size / 2; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + size / 2]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
