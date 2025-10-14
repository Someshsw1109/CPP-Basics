#include<bits/stdc++.h>
using namespace std;


// Array
int main() {
    int arr[5]; // declaration of array
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3] << endl;
    arr[3] += 10; // we can do operations on array
    cout << arr[3];

    return 0;
}

int main() {
    // 2D Array
    int arr[3][5]; // [3] --> Row number, [5] --> Column number


    arr[1][3] = 75; // Can assign some value at some row and column
    cout << arr[1][3];

    return 0;
}


// String
int main() {
    string s = "Somesh";

    int len = s.size();

    cout << s[0] << endl;
    cout << s[1] << endl;
    cout << s[2] << endl;
    cout << s[3] << endl;
    cout << s[4] << endl;
    cout << s[5] << endl;

    cout << s[len - 1] << endl;

    s[len - 1] = 'a'; // can assign some value at particular index in string
    cout << s[len - 1] << endl; // It prints 'a'
    return 0;
}