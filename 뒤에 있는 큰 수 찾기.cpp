/**
 * 문제: https://school.programmers.co.kr/learn/courses/30/lessons/154539
 *
 */
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers)
{
    vector<int> answer(numbers.size(), -1);
    stack<int> stack;
    for (int i = 0; i < numbers.size(); ++i)
    {
        while (!stack.empty() && numbers[stack.top()] < numbers[i])
        {
            answer[stack.top()] = numbers[i];
            stack.pop();
        }
        stack.push(i);
    }

    return answer;
}

int main()
{
    // vector<int> numbers = {9, 1, 5, 3, 6, 2};
    vector<int> numbers = {2, 3, 3, 5};
    vector<int> result = solution(numbers);

    cout << "Result: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
