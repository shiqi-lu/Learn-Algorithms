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

struct Moon {
    float store;
    float sales;
    float unit;
};
struct Moon moon[1002];

bool cmp(const struct Moon & a, const struct Moon & b)
{
    return a.unit > b.unit;
}

int main() {
    int N, demand;
    scanf("%d %d", &N, &demand);

    for (int i = 0; i < N; ++i) {
        scanf("%f", &moon[i].store);
    }
    for (int i = 0; i < N; ++i) {
        scanf("%f", &moon[i].sales);
        moon[i].unit = moon[i].sales / moon[i].store;
    }

    /*
    for (int i = 0; i < N; ++i) {
        printf("%f %f : %.2f\n", moon[i].store, moon[i].sales, moon[i].unit);
    }
    printf("---------");
    */

    std::sort(moon, moon+N, cmp);

    /*
    for (int i = 0; i < N; ++i) {
        printf("%f %f : %.2f\n", moon[i].store, moon[i].sales, moon[i].unit);
    }
     */

    float profit = 0;
    for (int i = 0; i < N; ++i) {
        if (moon[i].store <= demand) {
            profit += moon[i].sales;
            demand -= moon[i].store;
        } else {
            profit += demand * moon[i].unit;
            break;
        }
    }
    printf("%.2f", profit);

    return 0;
}