/* Pattern-4 */


/*

Problem Statement: Given an integer N, print the following pattern : 
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


Here, N = 5.

Examples:

Input Format: N = 3
Result: 
1
2 2 
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6

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

  for(int i = 1; i <= n; i = i + 1){
    for(int j = 1; j <= i; j = j + 1){
        cout << i << " ";
    }
    cout << endl;
  }

*/

#include<bits/stdc++.h>
using namespace std;

void Pattern4(int n){
    for(int i = 1; i <= n; i = i + 1){
        for(int j = 1; j <= i; j = j + 1){
            cout << i << " ";
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
        Pattern4(n);
    }
    return 0;
}