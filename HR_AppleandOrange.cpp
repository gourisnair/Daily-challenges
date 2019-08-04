#include<iostream>
using namespace std;
void countApplesandOranges(int ap[], int ora[], int a, int b, int m, int n, int s, int t) {
  int cntap = 0, cntor = 0;
  for(int i = 0; i < m; i++) {
    if((ap[i] + a) >= s && (ap[i] + a) <=t) {
      cntap++;
    }
  }

  for(int j = 0; j < n; j++) {
    if((ora[j] + b) >= s && (ora[j] + b) <=t) {
      cntor++;
    }
  }

  cout << cntap << endl;
  cout << cntor;
}

int main() {
  int s, t, a, b, m, n;
  cin >> s >> t;
  cin >> a >> b;
  cin >> m >> n;
  int ap[m], ora[n];
  for(int i = 0; i < m; i++) {
    cin >> ap[i];
  }
  for(int j = 0; j < n; j++) {
    cin >> ora[j];
  }
  countApplesandOranges(ap, ora, a, b, m, n, s, t);
  return 0;
}
