#include <cstdio>
#include <cstring>
#include <cmath>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

struct Student {
    char id[15];
    int score;
    int location_number;
    int local_rank;
    int final_rank;
};

// 注意审题！！！！
bool cmp(const Student & a, const Student & b) {
    if (a.score != b.score)
        return a.score > b.score;
    return strcmp(a.id, b.id) < 0;
}

int main() {
    std::vector<Student> vec;
    int location_count;
    scanf("%d", &location_count);
    for (int i = 1; i <= location_count; ++i) {
        int testee_count;
        scanf("%d", &testee_count);
        for (int j = 0; j < testee_count; ++j) {
            Student tmp;
            tmp.location_number = i;
            scanf("%s %d", tmp.id, &tmp.score);
            vec.push_back(tmp);
        }
        std::sort(vec.end() - testee_count, vec.end(), cmp);

        //printf("i: %d %d\n", i, testee_count);

        //int local_rank = 1;
        int index = vec.size() - testee_count;
        vec[index].local_rank = 1;
        //printf("%d %s %d %d\n", index, vec[index].id, vec[index].score, vec[index].local_rank);
        ++index;
        for (; index < vec.size(); ++index) {
            if (vec[index].score == vec[index - 1].score) {
                vec[index].local_rank = vec[index - 1].local_rank;
            } else {
                vec[index].local_rank = index - vec.size() + testee_count + 1;
            }
            //printf("%d %s %d %d\n", index, vec[index].id, vec[index].score, vec[index].local_rank);
        }
    }
    printf("%ld\n", vec.size());
    std::sort(vec.begin(), vec.end(), cmp);
    vec[0].final_rank = 1;
    printf("%s %d %d %d\n", vec[0].id, vec[0].final_rank, vec[0].location_number, vec[0].local_rank);
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i].score == vec[i - 1].score) {
            vec[i].final_rank = vec[i - 1].final_rank;
        } else {
            vec[i].final_rank = i + 1;
        }
        printf("%s %d %d %d\n", vec[i].id, vec[i].final_rank, vec[i].location_number, vec[i].local_rank);
    }

    return 0;
}