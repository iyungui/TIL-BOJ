#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double sum = 0;
    for(int i : numbers) sum += i;
    double answer = sum/numbers.size();
    return answer;
}