/* Pattern-6 */

/*

Problem Statement: Given an integer N, print the following pattern : 


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

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

run the outer loop for N times as we have to print N rows and since we have to print a right-angled triangle/pyramid 
which must be inverted, so the inner loop will run from 1 to (N-i)th integer in every row till we reach the Nth row 
where only ‘1’ would be left to get printed

for(int i = 0; i < n; i = i + 1){
    for(int j = n; j > i; j = j - 1){
        cout << n - j + 1 << " ";
    }
    cout << endl;
}


*/


#include<bits/stdc++.h>
using namespace std;


void Pattern6(int n){
    for(int i = 0; i < n; i = i + 1){
        for(int j = n; j > i; j = j - 1){
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i = i + 1){
        int n;
        cin >> n;
        Pattern6(n);
    }
    return 0;
}