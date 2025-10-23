/* Pattern-10 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
  *  
  **
  ***  
  **
  *   
Input Format: N = 6
Result:   
     *       (i = 0, stars = 1)
     **      (i = 1, stars = 2)
     ***     (i = 2, stars = 3) 
     ****    (i = 3, stars = 4)
     *****   (i = 4, stars = 5)
     ******  (i = 5, stars = 6)
     *****   (i = 6, stars = 5)
     ****    (i = 7, stars = 4)
     ***     (i = 8, stars = 3)
     **      (i = 9, stars = 2)
     *       (i = 10, stars = 1)

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

we have to print only the right half of the star diamond pattern.

My outer loop goes up to 2 x n - 1, 
till n the number of stars will be i
Now if somehow i will be greater than n then the number of stars will be 2 * n - i




*/

#include<bits/stdc++.h>
using namespace std;

void Pattern10(int n){
    for(int i = 0; i <= 2*n - 1; i++){

        int stars = i;

        if (i > n){
            stars = 2*n - i;
        }
        for(int j = 1; j <= stars; j++){
            cout << "*";
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
        Pattern10(n);
    }
    return 0;
}