#include <iostream>

using namespace std;

int n, m, a[21];

void dfs(int k)
{
    if (k > m) {
        for (int i = 1; i <= m; i++) {
            printf("%3d", a[i]);
        }
        cout << endl;
    } else {
        for (int i = a[k - 1] + 1; i <= n; i++) {
            a[k] = i;
            dfs(k + 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    dfs(1);

    return 0;
}