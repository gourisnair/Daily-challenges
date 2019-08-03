#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void substring(char s[], int n) {
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j <= n-i; j++) {
      int l = j+i-1;
      for(int k = j; k <= l; j++) {
        cout<<s[k];
        cout<<endl;
      }
    }
  }
  return;
}

int main() {
  int t;
  cout<<"Enter number of test cases:  ";
  cin >> t;                             //Number of test cases

  while(t--) {
    char s[100];
    cout<< "Enter string";
    cin >> s;
    substring(s, strlen(s));
  }
  return 0;
}
