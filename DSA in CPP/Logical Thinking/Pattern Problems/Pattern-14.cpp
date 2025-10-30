/* Pattern-14 */

/*

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
A
A B
A B C

Input Format: N = 6
Result:   
A
A B
A B C
A B C D
A B C D E
A B C D E F

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/

/*

Logic:- The outer loop will run for N rows and the inner loop will loop for i alphabets in each row 
where i is the row number. Alphabets in each row will start from A each time we enter a new row and 
will loop till (A+i)th alphabet in that row.


*/

#include<bits/stdc++.h>
using namespace std;
void Pattern14(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch;
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
        Pattern14(n);
    }
    return 0;
}