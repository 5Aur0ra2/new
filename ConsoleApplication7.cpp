#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> increaseVector(std::vector<int>& vec, int n) {
    std::vector<int> result;
    for (int i = 0; i < vec.size(); ++i) {
        result.push_back(vec[i] + n);
    }
    return result;
}

void testIncreaseVector() {
    std::vector<int> vec1 = { 1, 2, 3 };
    std::vector<int> result1 = increaseVector(vec1, 5);
    assert(result1 == std::vector<int>{6, 7, 8});

    std::vector<int> vec2 = { -1, -2, -3 };
    std::vector<int> result2 = increaseVector(vec2, 3);
    assert(result2 == std::vector<int>{2, 1, 0});

    std::vector<int> vec3 = { 0, 0, 0 };
    std::vector<int> result3 = increaseVector(vec3, 10);
    assert(result3 == std::vector<int>{10, 10, 10});
}

int main() {
    testIncreaseVector();
    std::cout << "All tests passed." << std::endl;
    return 0;
}
