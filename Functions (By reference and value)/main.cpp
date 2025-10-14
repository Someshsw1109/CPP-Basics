#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not returns anything
// return
// parameterised
// non parameterised

/*-------------------------------------------------------------------------------------------------*/
// void function (Non parameterised function)
void PrintMyName() {
    cout << "Somesh";
}
int main() {
    PrintMyName();
    return 0;
}

// Parameterised Function

void PrintMyName1(string name) {
    cout << "Hii I am " << name << endl;
}

int main() {
    string name;
    cin >> name;
    PrintMyName1(name);

    string name1;
    cin >> name1;
    PrintMyName1(name1);
    return 0;
}




// Return Function
// Take two numbers and print its sum
int Sum(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}


int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res = Sum(num1, num2)
    cout << res;
    // int sum = num1 + num2;
    // cout << "Sum is " << sum << endl;
    return  0;
}

// Parameterised Function

void Sum(int num1, int num2) {
    int sum = num1 + num2;
    cout << sum;
}


int main() {
    int num1, num2;
    cin >> num1 >> num2;
    // int res = Sum(num1, num2)
    Sum(num1, num2);
    // cout << res;
    // int sum = num1 + num2;
    // cout << "Sum is " << sum << endl;
    return  0;
}


int maxxx(int num1, int num2) {
    if (num1 >= num2) return num1;
    // Lets say if num1 = 2, num2 = 3 then this if condition does not executed
    // else return num2;
    // Now at the end this function is looking for a return line
    return num2; 
}


int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxxx(num1, num2);
    cout << maximum;
    return 0;
}


/*------------------------------------------------------------------------------------------------*/

// Function by value

// pass by int value
void Dummyprog(int num) {
    cout << num << endl;
    num += 2;
    cout << num << endl;
    num += 3;
    cout << num << endl;
}

int main() {
    int num = 10;
    Dummyprog(num);
    cout << num << endl;
    return 0;
}

// pass by string value

void Dummyprog(string s) {
    s[0] = 't';
    cout << s << endl;
}

int main() {
    string s = "Somesh";
    Dummyprog(s);
    cout << s << endl;
    return 0;
    // This will print "tomesh"
}


/*-------------------------------------------------------------------------------------------------*/
// Function by reference
// Pass by reference

void Dummyprog(string &s) {
    s[0] = 't';
    cout << s << endl; 
    // In this first it will assign the given value then it prints i.e, tomesh
}

int main() {
    string s = "Somesh";
    Dummyprog(s);
    cout << s << endl;
    // Now here it will not print Somesh, it will print tomesh
    return 0;
    // This will print "tomesh"
}


void Dummyprog(int &num) {
    cout << num << endl;
    num += 3;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main() {
    int num = 10;
    Dummyprog(num);
    cout << num << endl;
    return 0;
    // basically isme ye hota hai ki tumhara last updated value jo hoga wahi tumhara num ka final value hoga
}

void Dummyprog(int arr[], int n) {
    arr[0] += 10;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[5];
    for (int i = 0; i < n; i = i + 1) {
        // cout << i << endl;
        cin >> arr[i];
    }

    Dummyprog(arr, n)

    // for (int i = 0; i <= 4; i = i + 1) {
    //     cout << arr[i] << " ";
    // }
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << arr[3] << endl;
    return 0;
}