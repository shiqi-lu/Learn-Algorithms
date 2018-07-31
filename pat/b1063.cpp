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

float calc(int r, int v) {
    return sqrt(r*r + v*v);
}

int main() {
    int N;
    float max;
    scanf("%d", &N);
    int r, v;
    float current;
    for (int i = 0; i < N; ++i) {
        scanf("%d%d", &r, &v);
        current = calc(r,v);
        if (current > max) {
            max = current;
        }
    }
    printf("%0.2f\n", max);

    return 0;
}