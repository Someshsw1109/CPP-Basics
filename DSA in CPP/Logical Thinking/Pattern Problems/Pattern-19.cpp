/* Pattern-19 */


/*

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

Input Format: N = 6
Result:   
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/


/*

Logic:- We can clearly see that the first half of the pattern is just a mirror image of the second half of the pattern. 
If we observe the first part, we see that like some previous patterns, it can also be divided into 3 parts i.e. stars, 
spaces, and then stars. In the first row, there are no spaces and 10 stars, in the second row, there are 2 spaces and 8 stars, 
and so on. So, we initialize the spaces with 0 initially which will eventually increment by 2 whenever we enter a new row. The stars, 
however, will be twice the row number, half of the stars would be printed before the spaces and half after the spaces.


*/

#include<bits/stdc++.h>
using namespace std;

void Pattern19(int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        for(int j = 0; j < s; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i; j++){
            cout << "*";
        }
        s += 2;
        cout << endl;
    }

    s = 2*n - 2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < s; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        s -= 2;
        cout << endl;
    }

}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        Pattern19(n);
    }
    return 0;
}