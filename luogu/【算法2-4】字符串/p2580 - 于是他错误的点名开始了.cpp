#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n = 0, m = 0;
    cin >> n; // 读取学校领导的数量

    map<string, bool> schoolLeader;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        schoolLeader[name] = false; // 初始化每个名字，标记为未出现
    }

    cin >> m; // 读取要检查的名字数量

    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;

        if (schoolLeader.find(name) != schoolLeader.end()) {
            if (schoolLeader[name] == false) { // 第一次出现
                cout << "OK" << endl;
                schoolLeader[name] = true; // 标记为已出现
            } else { // 已经出现过
                cout << "REPEAT" << endl;
            }
        } else { // 不是有效的领导名字
            cout << "WRONG" << endl;
        }
    }

    return 0;
}
