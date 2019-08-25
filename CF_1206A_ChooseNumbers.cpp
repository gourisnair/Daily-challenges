#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  vector<int>A(n);
  for(int i = 0; i < n; i++) {
    cin >> A[i];
  }
  cin >> m;
  vector<int>B(m);
  for(int j = 0; j < m; j++) {
    cin >> B[j];
  }
    sort( A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    cout << A[0];
    cout << " ";
    cout << B[0];
}
