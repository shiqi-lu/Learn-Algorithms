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

int friendnum(int num) {
    int res = 0;
    while (num != 0) {
        res += num % 10;
        num /= 10;
    }
    return res;
}

int main() {
    std::vector<int> vec;
    int N;
    scanf("%d", &N);
    int tmp;
    for (int i = 1; i <= N; ++i) {
        scanf("%d", &tmp);
        vec.push_back(friendnum(tmp));
    }

    std::sort(vec.begin(), vec.end());

    std::vector<int>::iterator it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());

    printf("%ld\n", vec.size());
    for (int i = 0; i < vec.size() - 1; ++i) {
        printf("%d ", vec[i]);
    }
    printf("%d", vec[vec.size() - 1]);


    return 0;
}