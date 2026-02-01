#include <iostream>
using namespace std;

int main() {
    
    

    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        int cnt = 0;
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                cnt++;               
                if (i * i != x)
                    cnt++;           
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
