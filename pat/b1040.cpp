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
    const int MOD = 1000000007;
    char a[100010];
    int Pnum[100010] = {0};

    scanf("%s", a);
    size_t len = strlen(a);
    for (size_t i = 0; i < len; ++i) {
        if (i > 0) {
            Pnum[i] = Pnum[i-1];
        }
        if (a[i] == 'P') {
            ++Pnum[i];
        }
    }
    /*
    for (size_t i = 0; i < len; ++i) {
        printf("%d ", Pnum[i]);
    }
    putchar('\n');
     */

    int ans = 0;
    int Tnum = 0;
    for (size_t i = len - 1; i > 0; --i) {
        if (a[i] == 'T') {
            ++Tnum;
        } else if (a[i] == 'A') {
            ans = (ans + Pnum[i] * Tnum) % MOD;
        }
    }
    printf("%d", ans);

    return 0;
}