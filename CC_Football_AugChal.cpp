#include <bits/stdc++.h>
using namespace std;
int main(){
  int t, n, max, maxa;

  cin >> t;
  while(t--) {
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for(int j = 0; j < n; j++) {
      cin >> b[j];
    }
    max = a[0];
    for(int k = 1; k < n; k++) {
      if(max < a[k]) {

        maxa = k;
      }
    }

    int score = (a[maxa] * 20) - (b[maxa] * 10);
    if(score < 0) {
      score = 0;
    }
    cout << score;

  }

}
