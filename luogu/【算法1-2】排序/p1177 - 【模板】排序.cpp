#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    long long n, x[100000];
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> x[i];
    }
    sort(x, x + n);
    for (long long i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    return 0;
}