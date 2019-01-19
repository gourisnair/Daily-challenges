#include<iostream>
using namespace std;
int main()
{
  int n, p, k, i;
  cin >> n >> p >> k;

  int start_page, end_page;
  if((1 < (p-k))) {
    start_page = (p-k);
    cout << "<< ";
  } else {
    start_page = 1;
  }

  if(n > (p+k)) {
    end_page = p+k;
  } else {
    end_page = n;
  }

  for(i = start_page; i <= end_page; i++) {
    if(i == p) {
      cout << "(" << p << ")"<< " ";
    } else {
      cout << i << " ";
    }
  }

  if(n > (p+k)) {
    cout << ">>";
  }
}
