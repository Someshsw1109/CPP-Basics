#include<bits/stdc++.h>
using namespace std;

/*

A School has following rules of grading system:

1. Below 25 - F
2. 25 to 44 - E
3. 45 to 49 - D
4. 50 to 59 - C
5. 60 to 79 - B
6. 80 to 100 - A

Ask user to enter marks and print the corresponding grade.

*/

int main() {
    int grade;
    cin >> grade;

    if (grade < 25) {
        cout << "F" << endl;
    } else if (grade >= 25 and grade <= 44) {
        cout << "E" << endl;
    } else if (grade >= 45 and grade <= 49) {
        cout << "D" << endl;
    } else if (grade >= 50 and grade <= 59) {
        cout << "C" << endl;
    } else if (grade >= 60 and grade <= 79) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }
    return 0;
}