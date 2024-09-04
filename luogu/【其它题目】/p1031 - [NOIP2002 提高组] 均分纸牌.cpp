#include <iostream>

using namespace std;

int main() {
    int n = 0, idk = 0, cnt = 0;
    cin >> n;
    int pai[100];
    for (int i = 0; i < n; i++) {
        cin >> pai[i];
        idk += pai[i];
    }
    idk /= n;

    for (int i = 0; i < n; i++) {
        pai[i] -= idk;
    }
    for (int i = 0; i < n - 1; i++) {
        if (pai[i] == 0) {
            continue;
        }
        pai[i+1] += pai[i];
        pai[i] = 0;
        cnt++;
    }
    cout << cnt;
    return 0;
}