#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int beg, end, L;
  cin >> L;
  int l = s.size();

  for(int beg = 0; beg <= l-L; beg++) {
    cout << s.substr(beg, beg+L)<< endl;
  }
}
