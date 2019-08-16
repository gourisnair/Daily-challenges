#include<bits/stdc++.h>
using namespace std;
int countingValleys (char a[], int n) {
  int count = 0, valley = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 'D') {
      count++;
    } else {
      count--;
      if(count == 0) {
        valley++;       //valley needs to be incremented only when we meet an 'U'
      }
    }

  }
  return valley;
}

int main() {
  int n;
  cin >> n;
  char a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int count = countingValleys(a, n);
  cout << count;
}
