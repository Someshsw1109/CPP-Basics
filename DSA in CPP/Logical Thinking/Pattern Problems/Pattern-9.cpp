/* Pattern-9 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
  *  
 ***
***** 
*****  
 ***
  *   
Input Format: N = 6
Result:   
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/

/*

Logic - Combination of pattern-7 and pattern-8

*/

#include<bits/stdc++.h>
using namespace std;

void Pattern97(int n){
    // Pattern - 7
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        for(int j = 0; j < 2*i + 1; j++){
            cout << "*";
        }

        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }

        cout << endl;
    }
}

void Pattern98(int n){
    // Pattern - 8
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }

        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout << "*";
        }

        for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        Pattern97(n);
        Pattern98(n);
    }
    return 0;
}