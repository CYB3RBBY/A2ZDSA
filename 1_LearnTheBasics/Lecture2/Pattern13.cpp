#include <bits\stdc++.h>
using namespace std;

// pattern 13

void pattern13(int n){
  int num = 1;
  for (int i = 0; i < n; i++){
    for (int j = 1; j <= i; j++){
        cout << num << " ";
        num++;
    }
    cout << endl;
  }
}

int main(){
    int n = 6;
    pattern13(n);
    return 0;
}