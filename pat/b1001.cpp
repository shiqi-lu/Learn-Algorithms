#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n >>= 1;
        } else {
            n = (3 * n + 1) >> 1;
        }
        ++count;
    }
    printf("%d", count);

    return 0;
}