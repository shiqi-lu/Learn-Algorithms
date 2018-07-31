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

struct sinfo {
    char id[16];
    int formal;
} info[1003];


int main() {
    int N;
    scanf("%d", &N);

    char id[16];
    int test;
    int formal;
    for (int i = 1; i <= N; ++i) {
        scanf("%s %d %d", id, &test, &formal);
        strncpy(info[test].id, id, 15);
        info[test].formal = formal;
    }

    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &test);
        printf("%s %d\n", info[test].id, info[test].formal);
    }


    return 0;
}