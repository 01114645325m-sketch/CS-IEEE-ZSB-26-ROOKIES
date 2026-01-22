#include <iostream>

using namespace std;

int countDigitsInBaseK(int n, int k) {
    int count = 0;
    while (n > 0) {
        n = n / k;
        count++;
    }
    return count;
}

int main() {
    int N, K;
    if (cin >> N >> K) {
        cout << countDigitsInBaseK(N, K) << endl;
    }
    return 0;
}