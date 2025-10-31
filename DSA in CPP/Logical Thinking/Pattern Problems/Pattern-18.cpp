/* Pattern-18 */


/*

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
C
B C
A B C

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
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

Logic:- 

*/


#include<bits/stdc++.h>
using namespace std;

void Pattern18(int n){
    for(int i = 0; i < n; i++){
        for(char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++){
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
        Pattern18(n);
    }
    return 0;
}