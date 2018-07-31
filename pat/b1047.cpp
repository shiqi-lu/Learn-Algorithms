#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stack>

int main() {
    const int total_team = 10001;
    int a[total_team] = {0};
    int N;
    scanf("%d", &N);

    int team, man, grade;
    for (int i = 0; i < N; ++i) {
        scanf("%d-%d %d", &team, &man, &grade);
        a[team] += grade;
    }

    team = 1;
    grade = a[team];
    for (int i = 2; i < total_team; ++i) {
        if (a[i] > grade) {
            team = i;
            grade = a[team];
        }
    }

    printf("%d %d", team, grade);


    return 0;
}