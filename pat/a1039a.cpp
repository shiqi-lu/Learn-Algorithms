#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::map<std::string, std::vector<int> > stu_map;
    std::map<std::string, std::vector<int> >::iterator mit;

    int N, K; // student count and course count
    scanf("%d %d", &N, &K);
    for (int i = 0; i < K; ++i) {
        int cindex, sn; // course index and stu_numbers of each course
        scanf("%d %d", &cindex, &sn);
        std::string name;
        for (int j = 0; j < sn; ++j) {
            std::cin >> name;
            //scanf("%s", &name[0]);
            mit = stu_map.find(name);
            //std::cout << "name: " << name << std::endl;
            if (mit != stu_map.end()) {
                mit->second.push_back(cindex);
            } else {
                std::vector<int> course_vec;
                course_vec.push_back(cindex);
                stu_map.insert(std::make_pair(name, course_vec));
            }
        }
    }

    std::string name;
    for (int i = 0; i < N; ++i) {
        std::cin >> name;
        mit = stu_map.find(name);
        if (mit != stu_map.end()) {
            std::sort(mit->second.begin(), mit->second.end());
            printf("%s %ld", mit->first.c_str(), mit->second.size());
            for (int i = 0; i < mit->second.size(); ++i)
                printf(" %d", mit->second[i]);
            printf("\n");
        } else {
            printf("%s 0\n", name.c_str());
        }
    }

    /*
    while (scanf("%s", tmp) == 5) {
        std::string name = tmp;
        std::cout << name;
    }

    for (mit = stu_map.begin(); mit != stu_map.end(); ++mit) {
        printf("%s", mit->first.c_str());
        for (int i = 0; i < mit->second.size(); ++i)
            printf(" %d", mit->second[i]);
        printf("\n");
    }
*/

    return 0;
}