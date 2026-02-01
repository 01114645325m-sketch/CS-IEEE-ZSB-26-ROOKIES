#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

 
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }
 
    int ans = (n / 4) + 1;
    
    cout << ans << endl;
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}