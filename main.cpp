#include <iostream>
#include <vector>

int main() {
    std::vector<int> original_array;
    for (int i = 1; i <= 12; ++i) {
        original_array.push_back(i);
    }

    std::vector<std::vector<int>> sliced_arrays;
    int chunkSize = original_array.size() / 3;
    auto it = original_array.begin();
    while (it != original_array.end()) {
        std::vector<int> chunk(it, it + chunkSize);
        sliced_arrays.push_back(chunk);
        it += chunkSize;
    }

    for (const auto& sliced_array : sliced_arrays) {
        for (const auto& value : sliced_array) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
