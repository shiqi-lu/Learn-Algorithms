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
    int a[10]; // don't use a[0]
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &a[i]);
    }

    int res = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (j == i) continue;
            res += a[i] * 10 + a[j];
        }
    }

    printf("%d", res);


    return 0;
}