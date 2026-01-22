#include <iostream>
using namespace std;

int numberOfAttacks(int H, int A) {
    return (H + A - 1) / A;
}

int main() {
    int H, A;
    cin >> H >> A;

    cout << numberOfAttacks(H, A) << endl;

    return 0;
}