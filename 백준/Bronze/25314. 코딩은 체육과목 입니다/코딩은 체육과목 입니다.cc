#include <bits/stdc++.h>
using namespace std;

int n;
string ret;
int main() {
    cin >> n;
    for(int i = 0; i < n / 4; i++) {
        ret += "long ";
    }
    ret += "int";
    cout << ret << '\n';
    return 0;
}