/*
 * DATE: 05/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/find-the-distance-value-between-two-arrays/?envType=daily-question&envId=2026-11-05
 * PROBLEM STATEMENT:1385. Find the Distance Value Between Two Arrays
    Easy
    Topics
    premium lock icon
    Companies
    Hint
    Given two integer arrays arr1 and arr2, and the integer d, return the distance value between the two arrays.

    The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.

    

    Example 1:

    Input: arr1 = [4,5,8], arr2 = [10,9,1,8], d = 2
    Output: 2
    Explanation: 
    For arr1[0]=4 we have: 
    |4-10|=6 > d=2 
    |4-9|=5 > d=2 
    |4-1|=3 > d=2 
    |4-8|=4 > d=2 
    For arr1[1]=5 we have: 
    |5-10|=5 > d=2 
    |5-9|=4 > d=2 
    |5-1|=4 > d=2 
    |5-8|=3 > d=2
    For arr1[2]=8 we have:
    |8-10|=2 <= d=2
    |8-9|=1 <= d=2
    |8-1|=7 > d=2
    |8-8|=0 <= d=2
    Example 2:

    Input: arr1 = [1,4,2,3], arr2 = [-4,-3,6,10,20,30], d = 3
    Output: 2
    Example 3:

    Input: arr1 = [2,1,100,3], arr2 = [-5,-2,10,-3,7], d = 6
    Output: 1
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * Har arr1 ke element ko arr2 ke saare elements ke saath compare kiya.
 * abs() absolute difference nikalta hai, yani negative difference ko positive bana deta hai.
 * Agar difference d se chhota ya equal hai, toh element valid nahi hai.
 * flag = true initially rakha, agar koi matching element milta hai toh false kar diya.
 * Agar flag true hi rehta hai, toh count increase kar diya.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m, d;
    cin >> n;

    vector<int> arr1(n);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cin >> d;

    int count = 0;

    for(int i = 0; i < n; i++) {
        bool flag = true;

        for(int j = 0; j < m; j++) {
            if(abs(arr1[i] - arr2[j]) <= d) {
                flag = false;
                break;
            }
        }

        if(flag) {
            count++;
        }
    }

    cout << count;

    return 0;
}
