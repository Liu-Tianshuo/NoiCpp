#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    long long n = 0, group[10000], cnt = 0;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> group[i];
    }
    sort(group, group + n);

    for (long long i = 0; i < n - 1; i++) {
        if (group[i] > group[i + 1]) {
            sort(group + i, group + n);
        }
        long long now = group[i] + group[i + 1];
        cnt += now, group[i + 1] = now;
    }

    cout << cnt;
    return 0;
}