#include <iostream>

using namespace std;

long long n, p[20];

long long solve(int i, long long s1, long long s2) {
    if (i == n) return abs(s1 - s2);
    
    long long option1 = solve(i + 1, s1 + p[i], s2);
    long long option2 = solve(i + 1, s1, s2 + p[i]);
    
    return (option1 < option2) ? option1 : option2;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i];
    
    cout << solve(0, 0, 0) << endl;
    
    return 0;
}