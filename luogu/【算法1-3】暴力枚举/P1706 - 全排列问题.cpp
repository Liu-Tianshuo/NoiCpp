#include <iostream>

using namespace std;

bool isPrime(int k)
{
    if (k < 2)
        return false;
    else if (k == 2 || k == 3)
        return true;
    else if (k % 2 == 0 || k % 3 == 0)
        return false;
    else {
        for (int i = 5; i * i <= k; i += 6) {
            if (k % i == 0 || k % (i + 2) == 0)
                return false;
        }
        return true;
    }
}

int main()
{
    int n, max = 0;
    cin >> n;

    for (int i = 1; i < n / 2; i += 2)
        if (isPrime(i) && i > max)
            max = i;

    cout << max;
    return 0;
}