#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n % 6 == 0 && n / 6 >= 4) {
            cout << "YES\n";
            cout << 2 << " " << 3 << " " << n / 6 << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
