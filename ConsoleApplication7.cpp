#include <iostream>
#include <vector>
#include <gtest/gtest.h>

std::vector<int> increaseVector(std::vector<int> &vec, int n) {
    std::vector<int> result;
    for (int i = 0; i < vec.size(); ++i) {
        result.push_back(vec[i] + n);
    }
    return result;
}

TEST(IncreaseVectorTest, Test1) {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> result1 = increaseVector(vec1, 5);
    ASSERT_EQ(result1, std::vector<int>{6, 7, 8});
}

TEST(IncreaseVectorTest, Test2) {
    std::vector<int> vec2 = {-1, -2, -3};
    std::vector<int> result2 = increaseVector(vec2, 3);
    ASSERT_EQ(result2, std::vector<int>{2, 1, 0});
}

TEST(IncreaseVectorTest, Test3) {
    std::vector<int> vec3 = {0, 0, 0};
    std::vector<int> result3 = increaseVector(vec3, 10);
    ASSERT_EQ(result3, std::vector<int>{10, 10, 10});
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
