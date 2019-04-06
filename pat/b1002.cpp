#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <stack>

char chinese[10][6] = {"ling", "yi", "er", "san", "si",
                       "wu", "liu", "qi", "ba", "jiu"};

int main() {
    char ch;
    int res = 0;
    while ((ch = getchar()) != EOF) {
        if (isdigit(ch)) {
            res += ch - '0';
        } else {
            break;
        }
    }

    std::stack<int> s_num;
    while (res != 0) {
        s_num.push(res % 10);
        res /= 10;
    }

    while (s_num.size() != 1) {
        printf("%s ", chinese[s_num.top()]);
        s_num.pop();
    }
    printf("%s", chinese[s_num.top()]);

    return 0;
}