#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <cstring>
#include <climits>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int length, ants;
        scanf("%d %d", &length, &ants);
        int minl = INT_MIN;
        int maxl = INT_MIN;
        int loc;
        for (int j = 0; j < ants; ++j) {
            scanf("%d", &loc);
            minl = std::max(std::min(loc, length - loc), minl);
            maxl = std::max(std::max(loc, length - loc), maxl);
        }
        printf("%d %d\n", minl, maxl);
    }
    return 0;
}

