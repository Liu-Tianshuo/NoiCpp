#include <iostream>

using namespace std;

int main()
{
    int h, r, cnt = 0;
    double s, n = 20000;
    cin >> h >> r;
    s = r * r * 3.14 * h;
    while (true) {
        n -= s;
        cnt++;
        if (n <= 0) {
            break;
        }
    }
    cout << cnt;
    return 0;
}