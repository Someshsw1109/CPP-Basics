/* Pattern-21 */


/*

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
***
* *
***

Input Format: N = 6
Result:   
******
*    *
*    *
*    *
*    *
******

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/



/*

Logic: 
For first (i == 1) and last (i == N) line → print N stars (* × N).

For all middle lines (2 ≤ i ≤ N-1) → print *, then (N - 2) spaces, then another *.

*/

#include <bits/stdc++.h>
using namespace std;

void Pattern21(int n) {
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            // First and last line → print all stars
            for (int j = 1; j <= n; j++) cout << "*";
        } else {
            // Middle lines → star, spaces, star
            cout << "*";
            for (int j = 1; j <= n - 2; j++) cout << " ";
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        Pattern21(n);
    }
    return 0;
}
