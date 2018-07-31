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
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    //printf("%d %d %d\n", a, b, res);
    if (res < 0) {
        putchar('-');
        res = -res;
    }

    if (res == 0) {
        putchar('0');
        return 0;
    }

    int comma = 0;
    int num;
    std::stack<char> st;
    while (res != 0) {
        if (comma % 3 == 0 && st.size()) {
            st.push(',');
        }
        num = res % 10;
        res /= 10;
        st.push(num + '0');
        ++comma;
    }

    while (st.size()) {
        putchar(st.top());
        st.pop();
    }

    return 0;
}