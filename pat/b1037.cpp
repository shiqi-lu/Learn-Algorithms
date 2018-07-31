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

int total_knut(int galleon, int sickle, int knut) {
    return galleon * 17 * 29 + sickle * 29 + knut;
}

void convert_to_magic(int knuts) {
    int galleon = knuts / (17*29);
    knuts %= (17*29);
    int sickle = knuts / 29;
    int knut = knuts % 29;
    printf("%d.%d.%d", galleon, sickle, knut);
}

int main() {
    int galleon, sickle, knut;
    scanf("%d.%d.%d", &galleon, &sickle, &knut);

    int should_pay = total_knut(galleon, sickle, knut);

    scanf("%d.%d.%d", &galleon, &sickle, &knut);

    int pay = total_knut(galleon, sickle, knut);

    if (should_pay > pay) {
        putchar('-');
        convert_to_magic(should_pay - pay);
    } else {
        convert_to_magic(pay - should_pay);
    }



    return 0;
}