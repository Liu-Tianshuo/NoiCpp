#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double c = a + 0.1 * b;
    int cnt = 0;
    while (true) {
        c -= 1.9;
        if (c > 0)
            cnt++;
        else
            break;
    }
    cout << cnt;
    return 0;
}