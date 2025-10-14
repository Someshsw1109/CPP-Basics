// two primary kinds of loops that fall under the "while" category: 
// while loop
// do while loop


#include<bits/stdc++.h>
using namespace std;


// while loop
int main() {

    int i = 1;
    while (i <= 5)/*First Check goes inside*/ {
        cout << "Somesh " << i << endl;/*then prints*/


        i = i + 1;/*then increases*/

    }
    return 0;
}

// do while loop

int main() {
    int i = 2;
    do { /*do it first*/
        cout << "Somesh " << i << endl; /*prints*/
        i = i + 1;/*increases*/
    } while (i <= 5); /*then check*/
    return 0;
}