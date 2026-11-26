
/*
 * DATE: 26/11/2026
 *
 * PROBLEM LINK:
 * https://leetcode.com/problems/stone-removal-game/
 *
 * PROBLEM STATEMENT:
 * Alice removes exactly 10 stones first.
 * Each next player removes 1 less stone
 * than the previous opponent.
 * The player who cannot make a move loses.
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * I learned how to use loops and conditions
 * to simulate a turn-by-turn game.
 * I understood how the number of stones
 * removed decreases by 1 after every turn.
 */

#include <iostream>
using namespace std;

class Solution {
public:
    bool canAliceWin(int n) {
        while (n >= 10) {
            n -= 10;
            if (n < 9) return true;

            n -= 9;
            if (n < 8) return false;

            n -= 8;
            if (n < 7) return true;

            n -= 7;
            if (n < 6) return false;

            n -= 6;
            if (n < 5) return true;

            n -= 5;
            if (n < 4) return false;

            n -= 4;
            if (n < 3) return true;

            n -= 3;
            if (n < 2) return false;

            n -= 2;
            if (n < 1) return true;

            n -= 1;
            return false;
        }

        return false;
    }
};
