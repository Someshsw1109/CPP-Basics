/* Pattern-8 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
*****  
 ***
  *   
Input Format: N = 6
Result:     
***********   (i = 0, stars = 11)
 *********    (i = 1, stars = 9)
  *******     (i = 2, stars = 7)
   *****      (i = 3, stars = 5) 
    ***       (i = 4, stars = 3) 
     *        (i = 5, stars = 1) 

    Formula ---- 2 x N - (2 x i + 1)
    if we take N = 6, i = 1, then number of stars will be -- 12 - (2 + 1) == 9
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

Similar to pattern-7 but here we have to print stars in decreasing order.
Some space, then stars and then some space


*/

#include<bits/stdc++.h>
using namespace std;

void Pattern8(int n){
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
        Pattern8(n);
    }
}