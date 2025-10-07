#include <iostream>
#include <utility>
#include <vector>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T c: vec) {
        std::cout << c << " ";
    }
    std::cout << "\n";
}

// O(N^2)
void selection_sort(std::vector<int>& data)
{
    for (int i = 0; i < data.size() - 1; i++) {

        // Find smallest value starting at i
        int min_index = i;
        for (int j = i + 1; j < data.size(); j++) {
            if (data.at(j) < data.at(min_index)) {
                min_index = j;
            }
        }
        std::swap(data.at(i), data.at(min_index));
    }
}

int main()
{
    std::vector<int> v {23, 8, 15, 4, 42, 16};

    print_vector(v);
    selection_sort(v);
    print_vector(v);

    return 0;
}
