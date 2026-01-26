#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int pos1 = 0, pos2 = 0, q = 0;

    for (char c : s1)
        pos1 += (c == '+' ? 1 : -1);

    for (char c : s2) {
        if (c == '+') pos2++;
        else if (c == '-') pos2--;
        else q++;
    }

    int good = 0;
    int total = 1 << q;

    for (int mask = 0; mask < total; mask++) {
        int cur = pos2;
        for (int i = 0; i < q; i++) {
            if (mask & (1 << i)) cur++;
            else cur--;
        }
        if (cur == pos1)
            good++;
    }

    cout << fixed << setprecision(10)
         << (double)good / total << '\n';

    return 0;
}