#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, p;
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    printf("%.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}