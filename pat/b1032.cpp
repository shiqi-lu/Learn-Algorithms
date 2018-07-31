#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);
    int a[100000];
    memset(a, 0, sizeof(int) * 100000);
    int sn, gra;
    int max_sn = 1;
    while (n-- > 0) {
        scanf("%d%d", &sn, &gra);
        max_sn = sn > max_sn ? sn : max_sn;
        a[sn] += gra;
    }

    sn = 1, gra = 0;
    for (int i = 1; i <= max_sn; ++i) {
        if (gra < a[i]) {
            gra = a[i]; sn = i;
        }
    }

    printf("%d %d\n", sn, gra);

    return 0;
}