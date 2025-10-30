/* Pattern-15 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
A B C
A B
A

Input Format: N = 6
Result:   
A B C D E F
A B C D E 
A B C D
A B C
A B
A

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
Outer loop run for N, Inner Loop runs for N - i - 1

*/

#include<bits/stdc++.h>
using namespace std;

void Pattern15(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1); ch++){
            cout << ch << " ";
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
        Pattern15(n);
    }
    return 0;
}