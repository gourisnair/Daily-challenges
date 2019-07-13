#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  int size, count = 0;
  cin>>size;
  vector<int> v(size);
  for(int i =0;i<size;i++){
    cin>>v[i];
  }

  std::sort(v.begin(), v.end());
  int i = 0, j = 1;
  
  while(i < size-1) {
    while(j < size) {
      if(v[i] == v[j]) {
        count++;
        i+=2;
        j+=2;
      } else {
        i++;
        j++;
      }
    }
  }
  cout<< count;
}
