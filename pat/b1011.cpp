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
    int num;
    scanf("%d", &num);

    long a, b, c;
    for (int i = 1; i <= num; ++i) {
        scanf("%ld %ld %ld", &a, &b, &c);
        //printf("%d %d %d\n", a, b, c);
        printf("Case #%d: ", i);
        if (a + b > c) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    }


    return 0;
}