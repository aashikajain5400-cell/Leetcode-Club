/*
DATE: 19/11/2026

PROBLEM: 1672. Richest Customer Wealth
LINK: https://leetcode.com/problems/richest-customer-wealth/

PROBLEM STATEMENT:
Ek 2D array diya hai jisme rows customers ko represent karti hain
aur columns unke bank accounts ko.

Har customer ke saare accounts ka sum nikalna hai.
Jis customer ka sum sabse maximum hoga, wahi richest customer hai.

INSIGHTS GAINED FROM THIS QUESTION:

1. Hum nested loops use karenge kyunki array 2D hai.
2. Outer loop har customer (row) ko select karega.
3. Inner loop us customer ke saare bank accounts ko add karega.
4. sum variable ek customer ki total wealth store karega.
5. Agar sum, maxWealth se bada hai, toh maxWealth update kar denge.
6. Finally, maximum wealth return kar denge.

Example:
accounts = [[1,2,3], [3,2,1]]

Customer 1: 1 + 2 + 3 = 6
Customer 2: 3 + 2 + 1 = 6

Answer = 6
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;

            for (int j = 0; j < accounts[i].size(); j++) {
                sum = sum + accounts[i][j];
            }

            if (sum > maxWealth) {
                maxWealth = sum;
            }
        }

        return maxWealth;
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> accounts(m, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    Solution obj;

    cout << obj.maximumWealth(accounts);

    return 0;
}