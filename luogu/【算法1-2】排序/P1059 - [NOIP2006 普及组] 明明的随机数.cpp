#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    // 输入
    int n, abc[100], xyz[100], cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> abc[i];
    }

    // 排序
    sort(abc, abc + n);

    // 统计并输出
    for (int i = 1, j = 0; i <= n; i++) {
        if (abc[i - 1] != abc[i]) {
            xyz[j] = abc[i - 1];
            cnt++, j++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++) {
        cout << xyz[i] << " ";
    }

    return 0;
}