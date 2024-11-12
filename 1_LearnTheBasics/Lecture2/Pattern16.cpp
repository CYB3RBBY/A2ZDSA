#include <bits/stdc++.h>
using namespace std;

// Pattern 16

void pattern16(int n){
    for (int i = 0; i < n; i++){
    char c = 'A' + i;
        for (int j =0 ; j < i + 1; j++){
            cout << c << " ";
        }
        cout << endl;
    }
}

int main (){
    int n = 5;
    pattern16(n);
    return 0;
}