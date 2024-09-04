#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    long long n, m, x[2000000];
    cin >> n >> m;
    for (long long i = 0; i < m; i++) {
        cin >> x[i];
    }
    sort(x, x + m);
    for (long long i = 0; i < m; i++) {
        cout << x[i] << " ";
    }
    return 0;
}