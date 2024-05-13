#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    long long x = 0;
    cin >> x;
    long long input[10000], inputSorted[10000];
    for (long long i = 0; i < x; i++) {
        cin >> input[i];
        inputSorted[i] = input[i];
    }
    sort(inputSorted, inputSorted + x);
    long long max = inputSorted[x - 1];

    long long a[10000] = {1, 2};

    for (long long i = 2; i < max; i++) {
        a[i] = (2 * a[i - 1] + a[i - 2]);
    }

    for (long long i = 0; i < x; i++) {
        cout << a[input[i] - 1] % 32767 << endl;
    }

    return 0;
}