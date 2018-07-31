#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#include <iostream>

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::string tmp;
    std::stack<std::string> s;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            tmp += str[i];
        } else {
            s.push(tmp);
            tmp.clear();
        }
    }
    s.push(tmp);
    std::cout << s.top();
    s.pop();
    while (!s.empty()) {
        std::cout << " " << s.top();
        s.pop();
    }
    std::cout << std::endl;
    return 0;
}