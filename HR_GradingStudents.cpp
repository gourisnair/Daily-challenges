#include<iostream>
using namespace std;

int * rounding(int n, int a[]){
  int count;
  int r = 0;
  //cout<<n<<endl;
  for(int i = 0; i < n; i++) {
    count = 0;
    if(a[i] >= 38) {
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
