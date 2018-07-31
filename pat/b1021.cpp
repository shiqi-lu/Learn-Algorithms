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
    char num[1002];
    scanf("%s", num);
    int count[10];
    memset(count, 0, sizeof(int)*10);

    for (int i = 0; i < strlen(num); ++i) {
        ++count[num[i]-'0'];
    }

    for (int i = 0; i < 10; ++i) {
        if (count[i] != 0) {
            printf("%d:%d\n", i, count[i]);
        }
    }


    return 0;
}