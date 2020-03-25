# 1001 A+B Format （20 分)

Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

### Input Specification:

Each input file contains one test case. Each case contains a pair of integers a and b where −10​6​​≤a,b≤10​6​​. The numbers are separated by a space.

### Output Specification:

For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

### Sample Input:

```
-1000000 9

```

### Sample Output:

```
-999,991
```

```cpp
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
```