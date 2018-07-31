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
    int a[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }

    int i = 1;
    while (i < 10) {
        if (a[i] > 0) {
            printf("%d", i);
            --a[i];
            break;
        }
        ++i;
    }

    i = 0;
    while (i < 10) {
        if (a[i] > 0) {
            printf("%d", i);
            --a[i];
        } else {
            ++i;
        }
    }

    return 0;
}