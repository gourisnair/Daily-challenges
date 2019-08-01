#include<iostream>
using namespace std;
int main() {
  int n, count = 0;
  int a[n];
  cin>>n;
  cout<<n;
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }

  for(int i = 0; i < n; i++) {
    cout<<a[i];
  }

/*  for(int i = 0; i < n-1; i++) {
    for(int j = i+1; j < n; j++) {
      if(a[i] != 0 && a[j] != 0 && (a[i] == a[j]) && (i!=j)) {
        count++;
        a[i] == 0;
        a[j] == 0;
      }
    }
  }*/

  cout << count;
}
