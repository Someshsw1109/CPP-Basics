/* Pattern-3 */
/*

Problem Statement: Given an integer N, print the following pattern : 

1        -> Zeroth Row
1 2      -> First Row
1 2 3    -> Second Row
1 2 3 4  -> Third Row
1 2 3 4 5-> Fourth Row


Examples:

Input Format: N = 3
Result: 

1
1 2 
1 2 3

Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6



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

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

for zeroth row: Print one element
for first row: Print two elements
for second row: print three elements
for third row: print four elements
for fourth row: print five elements

for (i = 1; i <= n; i = i + 1){
    for(j = 1; j <= i; j = j + 1){
        cout << j;
    }
    cout << endl;
}

*/

#include<bits/stdc++.h>
using namespace std;

void Pattern3(int n){
    for(int i = 1; i <= n; i = i + 1){
        for(int j = 1; j <= i; j = j + 1){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i = i + 1){
        int n;
        cin >> n;
        Pattern3(n);
    }
    return 0;
}