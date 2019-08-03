#include<iostream>
using namespace std;

int * rounding(int n, int a[]){
  int count = 0;
  int r = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] > 37) {
      r = a[i];
      while((r % 5) != 0) {
        r +=1;
        count++;
      }
      if(count < 3) {
        a[i] = r;
      }
    }
  }
  cout<<"\n";
  for(int i = 0; i < n; i++) {
  cout<<a[i]<<endl;
  }
  cout<<"\n";
  return a;
}

int main() {
  int n;

  cin>>n;
  int a[n];
  int *p;
  for(int i = 0; i < n; i++) {
    cin>>a[i];
  }
  p = rounding(n, a);
  for(int i = 0; i < n; i++) {
  cout<<*(p+i)<<endl;
  }
  return 0;
}
