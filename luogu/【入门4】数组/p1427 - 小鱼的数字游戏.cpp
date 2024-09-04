#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long abc[100] = {0};
    for (int i = 0; i < 100; i++) {
        cin >> abc[i];
        if (abc[i] == 0) {
            break;
        }
    }
    for (int i = 99; i > -1; i--) {
        if (abc[i]) {
            cout << abc[i] << " ";
        }
    }

    return 0;
}
