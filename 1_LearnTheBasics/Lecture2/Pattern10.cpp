#include <bits/stdc++.h>
using namespace std;

void pattern101(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern102(int x){
    for(int i = 0; i < x; i++){
        for(int j = 4; j > i; j--){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n = 6;
    pattern101(n);
    int x = 5;
    pattern102(x);
    return 0;
}