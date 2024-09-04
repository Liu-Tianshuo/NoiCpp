#include <cmath>
#include <iostream>

using namespace std;

int n, n_pow = 1, gird[1025][1025];

void dfs(int x, int w, int h)
{
    if (x == 1)  // 递归边界
    {
        return;
    }
    
    for (int i = w; i <= w + x / 2 - 1; i++)
        for (int j = h; j <= h + x / 2 - 1; j++)
            gird[i][j] = 0;  // 将左上方的正方形清零
            
    dfs(x / 2, w + x / 2, h);
    dfs(x / 2, w + x / 2, h + x / 2);
    dfs(x / 2, w, h + x / 2);  // 递归剩余的三个正方形
}

int main() {
    cin >> n;
    n_pow = pow(2, n);

    for (int i = 1; i <= n_pow; i++)
        for (int j = 1; j <= n_pow; j++)
            gird[i][j] = 1;

    dfs(n_pow, 1, 1);

    for (int i = 1; i <= n_pow; i++) {
        for (int j = 1; j <= n_pow; j++)
            cout << gird[i][j] << " ";
        cout << endl;
    }

    return 0;
}