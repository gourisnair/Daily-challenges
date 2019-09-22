#include<bits/stdc++.h>
using namespace std;
struct Point {
  int a, b;
};

int main() {
  struct Point p = {1, 0};          //structure
  p.b = 2;
  cout << "(" << p.a <<", " << p.b << ")"<< endl;

  struct Point a[3];                //array of structures
  for(int i  = 0; i < 3; i++) {
    cin >> a[i].a >> a[i].b;
  }

  for(int i  = 0; i < 3; i++) {
    cout << "("<< a[i].a << ", " << a[i].b << ")" << endl;
  }

  struct Point* q = &p;           //structure pointer
  cout <<"("<< q->a <<", " << q->b <<")" <<endl;
}
