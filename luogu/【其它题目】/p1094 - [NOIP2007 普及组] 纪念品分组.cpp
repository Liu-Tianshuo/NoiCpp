#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int w = 0, n = 0;
    cin >> w >> n;
    int jinianpin[30000];
    for (long i = 0; i < n; i++) {
        cin >> jinianpin[i];
    }
    sort(jinianpin, jinianpin + n);

    int cnt = 0;
    for (int i = 0, j = n - 1; i <= j;) {
        if (jinianpin[i] + jinianpin[j] <= w) {
            cnt++;
            i++, j--;
        } else {
            j--;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}