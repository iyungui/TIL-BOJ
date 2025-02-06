#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == b && b == c) {  // 세 개가 모두 같은 경우
        cout << 10000 + a * 1000;
    }
    else if(a == b || a == c) {  // a가 하나와 같은 경우
        cout << 1000 + a * 100;
    }
    else if(b == c) {  // b와 c가 같은 경우
        cout << 1000 + b * 100;
    }
    else {  // 모두 다른 경우
        cout << max({a, b, c}) * 100;
    }
    
    return 0;
}
