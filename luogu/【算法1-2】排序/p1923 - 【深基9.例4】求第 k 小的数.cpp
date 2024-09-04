#include <algorithm>
#include <iostream>

using namespace std;

int n, m, x[5000000];

int main()
{

    cin >> n >> m;
    for (long i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    sort(x, x + n);
    cout << x[m];
    return 0;
}