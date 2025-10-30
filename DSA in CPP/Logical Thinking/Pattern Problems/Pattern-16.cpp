/* Pattern-16 */



/*

Problem Statement: Given an integer N, print the following pattern : 

Examples:

Input Format: N = 3
Result: 
A
B B
C C C

Input Format: N = 6
Result:   
A 
B B
C C C
D D D D
E E E E E
F F F F F F

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

Outer loop runs for n times, Inner loop runs for i times, 
print the char i times like if i = 1, print A for 1 time, 
if i = 2 print A's next char B for 2 times..... and so on....

*/

#include<bits/stdc++.h>
using namespace std;

void Pattern16(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
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
        Pattern16(n);
    } 
    return 0;
}