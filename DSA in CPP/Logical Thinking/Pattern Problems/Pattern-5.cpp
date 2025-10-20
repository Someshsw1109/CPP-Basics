/* Pattern-5 */

/*
// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
* * *
* * 
*

Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/

/*

Logic:

Lets take an example

n = 5

* * * * * 
* * * * 
* * * 
* * 
*



First row - 5 stars
Second row - 4 stars
Third row - 3 stars
Fourth row - 2 stars
Fifth row - 1 stars

for(int i = 0; i < n; i = i + 1){
    for(int j = n; j > i; j = j - 1){
        cout << "* ";
    }
    cout << endl;
}


*/


#include<bits/stdc++.h>
using namespace std;

void Pattern5(int n){
    for(int i = 0; i < n; i = i + 1){
        for(int j = n; j > i; j = j - 1){
            cout << "*" << " ";
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
        Pattern5(n);
    }
    return 0;
}