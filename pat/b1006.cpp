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

    int B = num / 100;
    num %= 100;
    int S = num / 10;
    int G = num % 10;

    //printf("%d %d %d", B, S, G);
    for (int i = 0; i < B; ++i) {
        printf("%c", 'B');
    }
    for (int i = 0; i < S; ++i) {
        printf("%c", 'S');
    }
    for (int i = 1; i <= G; ++i) {
        printf("%d", i);
    }


    return 0;
}