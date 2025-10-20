/* Pattern-7 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
  *  
 *** 
*****   
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********

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

As we can clearly observe that for each row there are some 
spaces that get printed then some stars and then again some 
spaces giving it a final pyramidal look.

we can say that there are N-i-1 spaces, 2*i+1 stars, and then again N-i-1 spaces for each row where i is the row index

So here we have two inner loops one for printing the spaces and one inner loop for printing the stars.

for(int i = 0; i < n; i = i + 1){
    for(int j = 0; j < n - i - 1; j = j + 1){
        cout << " "
    }

    for(int j = 0; j < 2*i + 1; j = j + 1){
        cout << "* ";
    }

    for(int j = 0; j < n - i - 1; j = j + 1){
        cout << " ";
    }
    cout << endl;
}

*/


#include<bits/stdc++.h>
using namespace std;


void Pattern7(int n){
    for(int i = 0; i < n; i = i + 1){
        for(int j = 0; j < n - i - 1; j = j + 1){
            cout << " ";
        }

        for(int j = 0; j < 2*i + 1; j = j + 1){
            cout << "*";
        }

        for(int j = 0; j < n - i - 1; j = j + 1){
            cout << " ";
        }
        cout << endl;
    }
}


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i = i + 1){
        int n;
        cin >> n;
        Pattern7(n);
    }
    return 0;
}