/* Pattern-12 */



/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1    1
12  21
123321

Input Format: N = 6
Result:   
1          1
12        21
123       321
1234    4321
12345  54321
123456654321

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

In each row, numbers are printed from 1 to the row number and then 
some spaces and then again numbers from 1 to the row number but in reverse order. 
So, the outer loop will run from 1 to N and there will be three inner loops for numbers, 
spaces, and then again numbers.


*/

#include<bits/stdc++.h>
using namespace std;

void Pattern12(int n){
    int spaces = 2*(n - 1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        // spaces -= 2;
        cout << endl;
        spaces -= 2;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        Pattern12(n);
    }
    return 0;
}