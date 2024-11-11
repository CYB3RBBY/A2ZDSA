#include <bits/stdc++.h>
using namespace std;

// Pattern 6

int main () {
    for (int i = 0; i < 5; i++){ // i determines number of rows
        for (int j = 5; j>i; j--) // j determines number of columns 
        {
            cout << 5 - j + 1 <<" "; // this line determines the numbers which are gonna be printed line wise
        }
        cout << endl;
    }
    return 0;
}