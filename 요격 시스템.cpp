/**
 * 레벨: 2
 * 문제: https://school.programmers.co.kr/learn/courses/30/lessons/181188
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets)
{
    if (targets.size() == 0)
        return 0;

    sort(targets.begin(), targets.end());

    // Printing the sorted vector
    for (const auto &target : targets)
    {
        std::cout << target[0] << ", " << target[1] << std::endl;
    }
    int answer = 1;
    return answer;
}

int main()
{
    vector<vector<int>> targets = {{4, 5}, {4, 8}, {10, 14}, {11, 13}, {5, 12}, {3, 7}, {1, 4}};
    int result = solution(targets);

    cout << "Result: " << result;

    return 0;
}
