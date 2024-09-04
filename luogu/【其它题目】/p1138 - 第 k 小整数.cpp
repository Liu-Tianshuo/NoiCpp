#include <algorithm>
#include <iostream>

using namespace std;

int n, m, x[10000];

int main() {
    cin >> n >> m;
    for (long i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x, x + n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (x[i] == x[i + 1]) {
            continue;
        }
        cnt++;
        if (cnt == m) {
            cout << x[i];
            break;
        }
    }
    if (cnt != m) {
        cout << "NO RESULT";
    }

    return 0;
}