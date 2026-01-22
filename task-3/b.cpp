#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& r, int n, int k) {
    int count = 0;
    for (int i = 1; i < 2 * n + 1 && count < k; i += 2) {
        if (r[i] - 1 > r[i - 1] && r[i] - 1 > r[i + 1]) {
            r[i]--;
            count++;
        }
    }
}

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<int> r(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++) {
        cin >> r[i];
    }

    solve(r, n, k);

    for (int i = 0; i < 2 * n + 1; i++) {
        cout << r[i] << (i == 2 * n ? "" : " ");
    }
    
    return 0;
}