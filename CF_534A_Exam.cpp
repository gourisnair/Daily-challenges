#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n <= 2 && n > 0) {
    cout << 1 << endl << "1";
  }  else {
    if (n == 3) {
      cout << 2 << endl << "1 2";
    } else {
      if (n == 4) {
        cout << 4 << endl << "3 1 4 2";
      } else {

        cout << n << endl;

        for(int i = 1; i <= n; i += 2) {
          cout << i << " ";
        }
        for(int j = 2; j <= n; j += 2) {
          cout << j << " ";
        }
      }
    }
  }
}
