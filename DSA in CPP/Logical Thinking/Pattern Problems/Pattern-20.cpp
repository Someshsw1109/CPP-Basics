/* Pattern-20 */


/*

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
*    *
**  **
******
**  **
*    *


Input Format: N = 6
Result:   
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/


/*

Logic:-

Stars, space then stars
then reverse it after nth row
the outer loop will run for 2*n -1 times ( n times when spaces > stars and then n-1 when stars > spaces ). 
There will be 3 inner loops, one to print stars, then spaces, and then again stars. Spaces will decrement by 
2 as i increases and when i reaches n, then spaces decrement by 2 every time we enter a new row. When i<n, the 
stars printed in each row are 2*i, and as soon as i>n, the stars in each row would be twice of 2*n-i.



*/

#include<bits/stdc++.h>
using namespace std;

void Pattern20(int n){
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if (i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }

}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        Pattern20(n);
    }
    return 0;
}