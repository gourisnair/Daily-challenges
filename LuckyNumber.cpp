#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool lucky(int n) {
    int r, d = n;
    int a[10];
    for(int i = 0; i < 10; i++) {
        a[i] = 0;
    }
    while(d > 0) {
        r = d%10;
        if(a[r]) {
            return false;
        }
        if(!a[r]) {
            a[r] = 1;
        }
        d = d/10;
    }
    return true;
}

int main() {
    int t, n;
    cin >> t; 
    while(t--) {
        cin >> n;
        if(lucky(n)) {
            cout << "\"true\"" << endl;
        } else {
            cout << "\"false\"" << endl;
        }
        
    }
    return 0;
}
