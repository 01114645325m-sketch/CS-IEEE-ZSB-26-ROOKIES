#include <iostream>
#include <string>

using namespace std;

string solve(int a, int b) {
    string s1(b, '0' + a);
    string s2(a, '0' + b);

    if (s1 < s2) 
        return s1;
    else 
        return s2;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << solve(a, b) << endl;

    return 0;
}