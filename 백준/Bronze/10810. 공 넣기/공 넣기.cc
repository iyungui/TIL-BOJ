#include <bits/stdc++.h>
using namespace std;

int n, m, arr[104];
int a, b, c;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        for(int j = a; j <= b; j++) {
            arr[j] = c;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    return 0;
}
