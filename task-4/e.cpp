#include <bits/stdc++.h>
using namespace std;

string s, cur;
int freq[26];
int n;
vector<string> res;

void solve() {
    if ((int)cur.size() == n) {
        res.push_back(cur);
        return;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            freq[i]--;
            cur.push_back('a' + i);
            solve();
            cur.pop_back();
            freq[i]++;
        }
    }
}

int main() {
    cin >> s;
    n = s.size();

    for (char c : s)
        freq[c - 'a']++;

    solve();

    cout << res.size() << '\n';
    for (auto &x : res)
        cout << x << '\n';

    return 0;
}
