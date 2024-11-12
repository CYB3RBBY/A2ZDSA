#include <bits/stdc++.h>
using namespace std;

// pattern 14

void pattern14(int n){
   for (int i = 0; i < n; i++){
    for (char c = 'A'; c <= 'A' + i;c++){
        cout << c<< " ";
    }
    cout << endl;
   }
}

int main() {
    int n = 5; 
    pattern14(n);
    return 0;
}