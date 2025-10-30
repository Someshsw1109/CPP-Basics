/* Pattern-17 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
  A  
 ABA 
ABCBA


Input Format: N = 6
Result:   
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA 
ABCDEFEDCBA

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/


/*

Logic :- First print space, then print char, then print space..

Outer loop runs for n times, there will be 3 inner loops.....
first inner loop runs for n - i - 1(print spaces)
second inner loops runs for 2*(i + 1) (print char)
third inner loop runs again for n - i - 1 times(print spaces)

*/


#include<bits/stdc++.h>
using namespace std;

void Pattern17(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i - 1); j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j = 1; j <= 2*i + 1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        for(int j = 0; j < (n - i - 1); j++){
            cout << " ";
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
        Pattern17(n);
    }
    return 0;
}