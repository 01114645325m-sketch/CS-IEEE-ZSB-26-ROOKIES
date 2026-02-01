#include <iostream>
#include <cmath>
using namespace std;


long long my_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
 

    long long X;
    if (cin >> X) {
   
        for (long long i = sqrt(X); i >= 1; i--) {
            if (X % i == 0) {
                long long a = i;
                long long b = X / i;

        
        
                if (my_gcd(a, b) == 1) { 
                    cout << a << " " << b << endl;
                    break; 
                }
            }
        }
    }
    return 0;
}