#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>

int main() {
    int A, B, D;

    scanf("%d%d%d", &A, &B, &D);

    int result = A + B;
    int mod = 0;
    std::stack<int> s;

    /* 源代码遗漏为0的情况
    while (result != 0) {
        mod = result % D;
        result /= D;
        s.push(mod);
    }
     */
    do {
        mod = result % D;
        result /= D;
        s.push(mod);
    } while (result != 0);

    while (!s.empty()) {
        printf("%d", s.top());
        s.pop();
    }
    putchar('\n');

    return 0;
}