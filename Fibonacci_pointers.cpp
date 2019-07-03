#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter the limit: " << endl;
  cin >> n;
  int x = 0; int y = 1;
  int *a = (int*)malloc(sizeof(n));
  *(a+0) = 0;
  *(a+1) = 1;
  for(int i = 2; i < n; i++) {
    *(a+i) = x+y;
    x = y;
    y = *(a+i);
  }

  for (int j = 0; j < n; j++) {
    cout << *(a+j) << endl;
  }
}
