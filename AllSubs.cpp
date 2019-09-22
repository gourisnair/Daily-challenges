#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int beg, end;
  int l = s.size();

  for(int beg = 0; beg < l-1; beg++) {
    for(end = 1; end <= l-beg; end++) {
      cout << s.substr(beg, end)<< endl;
    }
  }
}
