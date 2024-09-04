#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int score[3];
    int id;
};

bool cmp(Student a, Student b) { // 确保即使成绩相同，编号在前的仍能被优先输出
    if (a.score[0] + a.score[1] + a.score[2] ==
        b.score[0] + b.score[1] + b.score[2]) {
        return a.id < b.id;
    } else {
        return a.score[0] + a.score[1] + a.score[2] >
               b.score[0] + b.score[1] + b.score[2];
    }
}

int main() {
    int n = 0;
    cin >> n;
    Student students[1000];
    // Input
    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        for (int j = 0; j < 3; j++) {
            cin >> students[i].score[j];
        }
        students[i].id = i;
    }
    // Sort
    sort(students, students + n, cmp);
    cout << students[0].name << " " << students[0].score[0] << " "
         << students[0].score[1] << " " << students[0].score[2];
    return 0;
}