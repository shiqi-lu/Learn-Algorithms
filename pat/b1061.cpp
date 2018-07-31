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
    int N, M;
    int scores[101];
    int ans[101];

    scanf("%d%d", &N, &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &scores[i]);
    }
    for (int i = 0; i < M; ++i) {
        scanf("%d", &ans[i]);
    }

    for (int i = 0; i < N; ++i) {
        int grade = 0;
        int a;
        for (int j = 0; j < M; ++j) {
            scanf("%d", &a);
            if (ans[j] == a) {
                grade += scores[j];
            }
        }
        printf("%d\n", grade);
    }
    
    return 0;
}