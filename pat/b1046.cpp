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
    int N;
    scanf("%d", &N);

    int j_s, j_h, y_s, y_h; //s:shout h:hua
    int j_d = 0;//d:drink
    int y_d = 0;
    for (int i = 0; i < N; ++i) {
        scanf("%d%d%d%d", &j_s, &j_h, &y_s, &y_h);
        //printf("%d %d %d %d\n", j_s, j_h, y_s, y_h)
        if (j_s + y_s == j_h)
            ++y_d;
        if (j_s + y_s == y_h)
            ++j_d;
        if (j_s + y_s == j_h && j_s + y_s == y_h) {
            --y_d;
            --j_d;
        }
    }
    printf("%d %d", j_d, y_d);

    return 0;
}