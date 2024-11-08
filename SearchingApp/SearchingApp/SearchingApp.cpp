#include <iostream>
#include <array>
#include <vector>
#include "Searching.cpp"

int main() {
    std::array<int, 10> arr = { 1, 2, 2, 2, 3, 4, 5, 5, 6, 7 };
    int targetArray = 2;
    int indexArray = binarySearchFirst(arr, targetArray);
    std::cout << "std::in array " << targetArray << " index first: " << indexArray << " was found in.\n";

    std::vector<int> vec = { 1, 2, 2, 2, 3, 4, 5, 5, 6, 7 };
    int targetVector = 5;
    int indexVector = binarySearchFirst(vec, targetVector);
    std::cout << "std::in vector " << targetVector << " index first: " << indexVector << " was found in.\n";

    return 0;
}
