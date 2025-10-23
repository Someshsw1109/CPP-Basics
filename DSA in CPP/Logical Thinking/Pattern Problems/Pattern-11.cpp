/* Pattern-11 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1
01
101

Input Format: N = 6
Result:   
1
01
101
0101
10101
010101

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





*/

#include<bits/stdc++.h>
using namespace std;

void Pattern11(int n) {
    // Write your code here.
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            start = 1;
        } else{
            start = 0;
        }
    for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Pattern11(n);
    }
}