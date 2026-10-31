/*
 * DATE: 31/10/2026
 *
 * PROBLEM LINK:
    https://www.hackerrank.com/challenges/array-left-rotation/problem
 * PROBLEM STATEMENT:
    PROBLEM: Left Rotation

    PROBLEM STATEMENT:

    A left rotation operation on a circular array shifts each of the array's elements one unit to the left. The elements that fall off the left end reappear at the right end.

    Given an integer d, rotate the array that many steps to the left and return the result.

    Example:

    arr = [1, 2, 3, 4, 5]
    d = 2

    After 2 left rotations, the array becomes:
    [3, 4, 5, 1, 2]

    FUNCTION DESCRIPTION:

    Complete the rotateLeft function with the following parameters:

    int d: the amount to rotate by
    int arr[n]: the array to rotate

    Returns:
    int[n]: the rotated array

    INPUT FORMAT:

    The first line contains two space-separated integers that denote n, the number of integers, and d, the number of left rotations to perform.

    The second line contains n space-separated integers that describe arr.

    CONSTRAINTS:

    1 <= n <= 10^5
    1 <= d <= n
    1 <= arr[i] <= 10^6

    SAMPLE INPUT:

    5 4
    1 2 3 4 5

    SAMPLE OUTPUT:

    5 1 2 3 4

    EXPLANATION:

    To perform 4 left rotations, the array undergoes the following sequence of changes:

    Initial:     1 2 3 4 5
    Rotation 1:  2 3 4 5 1
    Rotation 2:  3 4 5 1 2
    Rotation 3:  4 5 1 2 3
    Rotation 4:  5 1 2 3 4

    Therefore, the final rotated array is:
    5 1 2 3 4
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
    Question mein array ko d times left rotate karna tha, matlab starting ke d elements ko end mein shift karna tha.
    Ek ans vector banaya jisme rotated elements store karenge.
    d = d % n use kiya kyunki agar rotations array size se zyada hain, toh unnecessary full rotations avoid kar sakte hain.
    First for loop i = d se start kiya kyunki rotation ke baad arr[d] se last tak ke elements beginning mein aayenge.
    Second for loop i = 0 se d-1 tak chalaya taaki starting ke elements end mein add ho jaayein.
    Finally rotated array ans return kar diya.
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */


#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    d = d % n;
    for (int i = d; i < n; i++) {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < d; i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}
int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = rotateLeft(d, arr);
    for (int x : result) {
        cout << x << " ";
    }
}