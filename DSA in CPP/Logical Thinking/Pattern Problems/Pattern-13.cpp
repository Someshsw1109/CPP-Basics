/*Pattern - 13*/

/*

Problem Statement: Given an integer N, print the following pattern : 


Examples:

Input Format: N = 3
Result: 
1
2 3
4 5 6

Input Format: N = 6
Result:   
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

*/

/*

// IMportant Points:

1- For the outer loop, count the number of lines.

2- In the inner loop, focus on the columns, and connect them somehow to the rows

3- print them inside the inner for loop

4- Observe symmetry (Optional)

*/

/*

Logic -

outer loop runs for N times and the inner loop runs for i times.
the number each time it increases by 1.


*/


#include<bits/stdc++.h>
using namespace std;
void Pattern13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i <= t; i++){
        int n;
        cin >> n;
        Pattern13(n);
    }
    return 0;
}