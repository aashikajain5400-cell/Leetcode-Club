/*
 * DATE: 27/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/create-grid-with-exactly-one-path/description/?envType=daily-question&envId=2026-10-27
 * PROBLEM STATEMENT:3963. Create Grid With Exactly One Path
    You are given two integers m and n, representing the number of rows and columns of a grid.

    Construct any m x n grid consisting only of the characters '.' and '#', where:

    '.' represents a free cell.
    '#' represents an obstacle cell.
    A valid path is a sequence of free cells that:

    Starts at the top-left cell (0, 0).
    Ends at the bottom-right cell (m - 1, n - 1).
    Moves only:
    Right, from (i, j) to (i, j + 1), or
    Down, from (i, j) to (i + 1, j).
    Return any grid such that there is exactly one valid path from the top-left cell to the bottom-right cell.

    Example 1:
    Input: m = 2, n = 3
    Output: ["..#","#.."]
    Explanation:
    The only valid path is: (0,0) → (0,1) → (1,1) → (1,2)
    Example 2:
    Input: m = 3, n = 3
    Output: ["..#","#..","##."]
    Explanation:
    The only valid path is: (0,0) → (0,1) → (1,1) → (1,2) → (2,2)
    Example 3:
    Input: m = 1, n = 4
    Output: ["...."]
    Explanation:
    The only valid path is: (0,0) → (0,1) → (0,2) → (0,3)
 * __________________________________________________
 * 
 * __________________________________________________
 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * __________________________________________________
 * 
 * __________________________________________________
 *
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m, string(n, '#'));

        for (int j = 0; j < n; j++) {
            grid[0][j] = '.';
        }

        for (int i = 0; i < m; i++) {
            grid[i][n - 1] = '.';
        }

        return grid;
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    Solution obj;
    vector<string> result = obj.createGrid(m, n);

    for (int i = 0; i < m; i++) {
        cout << result[i] << endl;
    }

    return 0;
}