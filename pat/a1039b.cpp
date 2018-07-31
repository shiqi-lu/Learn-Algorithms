#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

const int N = 40001;
const int M = 26*26*26*10 + 1;

int getID(char name[]) {
    int id = 0;
    for (int i = 0; i < 3; ++i) {
        id = id * 26 + name[i] - 'A';
    }
    id = id * 10 + name[3] - '0';
    return id;
}

int main() {
    std::vector<int> stu_vec[M];
    char name[5];

    int num, K; // student count and course count
    scanf("%d %d", &num, &K);
    for (int i = 0; i < K; ++i) {
        int cindex, sn; // course index and stu_numbers of each course
        scanf("%d %d", &cindex, &sn);
        for (int j = 0; j < sn; ++j) {
            scanf("%s", name);
            int id = getID(name);
            stu_vec[id].push_back(cindex);
        }
    }

    for (int i = 0; i < num; ++i) {
        scanf("%s", name);
        int id = getID(name);
        std::sort(stu_vec[id].begin(), stu_vec[id].end());
        printf("%s %ld", name, stu_vec[id].size());
        for (int i = 0; i < stu_vec[id].size(); ++i)
            printf(" %d", stu_vec[id][i]);
        printf("\n");
    }

    return 0;
}