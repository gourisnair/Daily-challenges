#include<bits/stdc++.h>
using namespace std;

void pointReflection(int px, int py, int qx, int qy) {
  cout << (2*qx) - px;
  cout <<" ";
  cout << (2*qy) - py << endl;
}
int main() {
  int t, px, py, qx, qy;
  cin >> t;
  while(t--) {
    cin >> px >> py >> qx >> qy;
    pointReflection(px, py, qx, qy);
  }
}
