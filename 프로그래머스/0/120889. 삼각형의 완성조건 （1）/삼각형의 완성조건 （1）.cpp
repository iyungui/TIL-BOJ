#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end(), greater<int>());
    return ((sides[0] < sides[1] + sides[2]) ? 1 : 2);
}