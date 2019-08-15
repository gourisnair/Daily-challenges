#include<iostream>
#include<vector>
using namespace std;
int main() {
  int n, count = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for(int i = 0; i < n-1; i++) {
    if(v[i] != 0) {
      for(int j = i+1; j < n; j++) {
        if(v[i] == v[j]) {
          count++;
          v[i] = 0;
          v[j] = 0;
          break;
        }
      }
    }
  }
    cout << count;
}
