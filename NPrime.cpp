#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, flag, i, j;
  cin >> n;
  for(i = 2; i < n; i++) {
    for(j = 2; j < n/2; j++) {
      if((i % j == 0) && (i != j)) {
        flag = 1;
        break;
      } else {
        flag = 0;
      }
    }
    if(flag == 0) {
      cout << i;
      cout << " ";
    }
  }
}
