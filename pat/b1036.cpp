#include <cstdio>
#include <cstring>
#include <cmath>

int main() {
    int n;
    char a;
    scanf("%d %c", &n, &a);

    for (int i = 0; i < n; ++i)
        putchar(a);

    putchar('\n');

    int col = round(double(n)/2) - 2;
    for (int i = 1; i <= col; ++i) {
        putchar(a);
        for (int j = 0; j < n - 2; ++j)
            putchar(' ');
        putchar(a);
        putchar('\n');
    }

    for (int i = 0; i < n; ++i)
        putchar(a);

    putchar('\n');

    return 0;
}