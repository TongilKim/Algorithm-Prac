#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int size = numbers.size();
    vector<int> result(size, -1);  // 결과 배열을 -1로 초기화
    
    stack<int> s;  // 인덱스를 저장할 스택
    for (int i = 0; i < size; i++) {
        while (!s.empty() && numbers[s.top()] < numbers[i]) {
            // 스택의 top에 있는 인덱스가 현재 원소보다 작을 때까지 반복
            result[s.top()] = numbers[i];  // 뒷 큰수로 설정
            s.pop();  // 스택에서 제거
        }
        s.push(i);  // 현재 인덱스를 스택에 저장
    }
    
    return result;
}

int main() {
    vector<int> numbers = {2, 3, 3, 5};
    vector<int> result = solution(numbers);
    
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
