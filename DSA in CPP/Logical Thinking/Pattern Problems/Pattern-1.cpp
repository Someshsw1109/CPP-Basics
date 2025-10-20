/*
Pattern - 1

* * * *
* * * *
* * * *
* * * *

*/

/*

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/

/*

Logic - 
    for (i = 0; i < 4; i = i + 1) {
        for (j = 0; j < 4; j = j + 1) {
            cout << "*";
        }
        cout << endl;
    }


*/

/*Code*/

/* Pattern printing without using a separate function */
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i = i + 1){
        int n;
        cin >> n;
        for (int i = 0; i < n; i = i + 1) {
            for (int j = 0; j < n; j = j + 1) {
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;

}

/* Pattern printing using a void function */
#include<bits/stdc++.h>
using namespace std;

void Pattern1(int n) {
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int t; // Testcases
    cin >> t;
    for (int i = 0; i < t; i = i + 1) {
        int n;
        cin >> n;
        Pattern1(n);
    }
    return 0;
}



/*CodeStudio Problem ----- N-Forest*/

/*Problem Name - N-Forest*/
/*

Problem statement
Sam is making a forest visualizer. An N-dimensional forest is represented by the pattern of size NxN filled with ‘*’.

For every value of ‘N’, help sam to print the corresponding N-dimensional forest.

Example:
Input: ‘N’ = 3

Output: 
* * *
* * *
* * *
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
* * *
* * *
* * *
Explanation Of Sample Input 1 :
For N = 3, fill all the rows and columns in 3x3 matrix with ‘*’.
Sample Input 2 :
1
Sample Output 2 :
*
Sample Input 3 :
4
Sample Output 3 :
* * * *
* * * *
* * * *
* * * *

*/

void nForest(int n) {
	// Write your code here.
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            cout << "* ";
        }
        cout << endl;
    }
}