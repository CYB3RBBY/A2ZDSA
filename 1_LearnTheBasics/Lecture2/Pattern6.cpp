#include <bits/stdc++.h>
using namespace std;

// Pattern 6

int main () {
    for (int i = 0; i < 5; i++){
        for (int j = 5; j>i; j--)
        {
            cout << 5-j+1 <<" ";
        }
        cout << endl;
    }
    return 0;
}