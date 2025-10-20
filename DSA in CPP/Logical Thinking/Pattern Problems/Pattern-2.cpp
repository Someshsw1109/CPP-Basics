/*Pattern - 2*/

/*
Problem Statement: Given an integer N, print the following pattern : 

*           -> Zeroth Row
* *         -> First Row
* * *       -> Second Row
* * * *     -> Third Row
* * * * *   -> Fourth Row
* * * * * * -> Fifth Row 

*/


/*
// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/




/* 
Logic-

 for the zeroth row we have one star
 for the first row we have two star
 for the second row we have three star
 for the third row we have four star
 for the fourth row we have five star
 for the fifth row we have six star

 for(int i = 0; i < n; i = i + 1){
    for(int j = 0; j <= i; j = j + 1){
        cout << "*";
    }
 }



*/



#include<bits/stdc++.h>
using namespace std;

void Pattern2(int n){
    for(int i = 0; i < n; i = i + 1){
        for(int j = 0; j <= i; j = j + 1){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t; // Testcases
    cin >> t;
    for(int i = 0; i < t; i = i + 1){
        int n;
        cin >> n;
        Pattern2(n);
    }
    return 0;
}