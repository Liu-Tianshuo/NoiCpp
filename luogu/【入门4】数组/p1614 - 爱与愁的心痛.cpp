#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c[3000], min = 1919810;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }
    for (int i = 0; i <= a - b; i++) {
        int temp = 0;
        for (int j = i; j < i + b; j++) {
            temp += c[j];
        }
        if (temp < min) {
            min = temp;
        }
    }
    cout << min;
    return 0;
}
