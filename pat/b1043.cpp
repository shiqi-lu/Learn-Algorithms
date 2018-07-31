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
    int num[6] = {0};
    //0:P, 1:A, 2:T, 3:e, 4:s 5:t

    int c;
    int total = 0;
    while ((c = getchar()) != EOF) {
        //putchar(c);
        switch (c) {
            case 'P':
                ++num[0];
                ++total;
                break;
            case 'A':
                ++num[1];
                ++total;
                break;
            case 'T':
                ++num[2];
                ++total;
                break;
            case 'e':
                ++num[3];
                ++total;
                break;
            case 's':
                ++num[4];
                ++total;
                break;
            case 't':
                ++num[5];
                ++total;
                break;
        }
    }
    //for (int i = 0; i < 6; ++i) {
    //    printf("%d:%d", i, num[i]);
    //}

    while (total > 0) {
        for (int i = 0; i < 6; ++i) {
            if (num[i] > 0) {
                switch (i) {
                    case 0:
                        putchar('P');
                        break;
                    case 1:
                        putchar('A');
                        break;
                    case 2:
                        putchar('T');
                        break;
                    case 3:
                        putchar('e');
                        break;
                    case 4:
                        putchar('s');
                        break;
                    case 5:
                        putchar('t');
                        break;
                }
                --num[i];
                --total;
            }
        }
    }

    return 0;
}