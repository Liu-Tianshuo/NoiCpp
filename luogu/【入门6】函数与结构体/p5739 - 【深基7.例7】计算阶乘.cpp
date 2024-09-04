#include <iostream>

using namespace std;

long long n = 0, ans = 1;

void factorial(int k) {
    ans *= k + 1;
    if (k != n - 1) {
        factorial(k + 1);
    }
}

int main() {
    cin >> n;
    if (n != 1) {
        factorial(1);
    }
    cout << ans;
    return 0;
}