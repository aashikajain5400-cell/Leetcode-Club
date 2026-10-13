/*
 * DATE: 13/10/2026
 *
 * PROBLEM LINK: 
 * PROBLEM STATEMENT:
Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with a nearly sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number  in the rightmost cell, can you write some simple code to insert  into the array so that it remains sorted?

Since this is a learning exercise, it won't be the most efficient way of performing the insertion. It will instead demonstrate the brute-force method in detail.

Assume you are given the array  indexed . Store the value of . Now test lower index values successively from  to  until you reach a value that is lower than , at  in this case. Each time your test fails, copy the value at the lower index to the current index and print your array. When the next lower indexed value is smaller than , insert the stored value at the current index and print the entire array.

Example


Start at the rightmost index. Store the value of . Compare this to each element to the left until a smaller value is reached. Here are the results as described:

1 2 4 5 5
1 2 4 4 5
1 2 3 4 5
Function Description

Complete the insertionSort1 function in the editor below.

insertionSort1 has the following parameter(s):

n: an integer, the size of 
arr: an array of integers to sort
Returns

None: Print the interim and final arrays, each on a new line. No return value is expected.
Input Format

The first line contains the integer , the size of the array .
The next line contains  space-separated integers .

Constraints



Output Format

Print the array as a row of space-separated integers each time there is a shift or insertion.

Sample Input

5
2 4 6 8 3
Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 
Explanation

 is removed from the end of the array.
In the st line , so  is shifted one cell to the right.
In the nd line , so  is shifted one cell to the right.
In the rd line , so  is shifted one cell to the right.
In the th line , so  is placed at position .

 *
 * INSIGHTS GAIN FROM THIS QUESTION:
 * 
 * ### Insertion Sort Part 1 (Using Recursion) — Insights Gained

Is question mein array already sorted tha, bas last element ko uski correct position par insert karna tha.

**How I approached it:**

- Sabse pehle last element ko temp mein store kiya, taaki shifting ke time uski value lose na ho.
- i = n-2 se start kiya, kyunki last element ko usse pehle wale elements se compare karna tha.
- Agar arr[i] > temp hai, toh arr[i] ko ek position right shift kiya.
- Har shift ke baad array print kiya, as required in the question.
- Loop use karne ke bajaye solve(arr, i-1, temp) call kiya, taaki next left element check ho.
- Jab i < 0 ya arr[i] <= temp mila, toh samajh aaya ki correct position mil gayi. Wahan temp insert karke return kar diya.


**What I learned:**

Recursion mein bas ye identify karna hai ki kya repeat ho raha hai aur kab stop karna hai. Yahan comparison aur shifting repeat ho rahe the, aur har call mein `i` decrease ho raha tha.

vector<int>& arr use kiya taaki har recursive call mein same array modify ho, copy na bane.

**Mistakes I made:**

- Initially vector not declared error aaya because header/namespace missing tha.
- main() missing hone se linker error aaya.
- arr.size() ke saath int comparison par signed/unsigned warning aayi.

**Complexity:** Time O(n), Space O(n) due to recursion stack.

**For revision:** Last element save karo → left se compare karo → bada ho toh shift + print → i-1 ke saath recursion → correct position par insert + print.

**Important:** Part 1 mein sirf last element insert karna hai, poora array sort nahi karna.
 * 
 *
 */


#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr) {
    for(int i = 0; i < (int)arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(vector<int>& arr, int i, int temp) {
    if(i < 0 || arr[i] <= temp) {
        arr[i + 1] = temp;
        print(arr);
        return;
    }

    arr[i + 1] = arr[i];
    print(arr);

    solve(arr, i - 1, temp);
}

void insertionSort1(int n, vector<int> arr) {
    int temp = arr[n - 1];
    solve(arr, n - 2, temp);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort1(n, arr);

    return 0;
}
