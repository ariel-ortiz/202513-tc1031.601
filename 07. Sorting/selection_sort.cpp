#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>
#include <chrono>

void fill_random(std::vector<int>& values, int max_value)
{
    std::srand(0);
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = std::rand() % max_value;
    }
}

void fill_incremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = 0; i < values.size(); ++i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

void fill_decremental(std::vector<int>& values, int max_value)
{
    double section = max_value / static_cast<double>(values.size());
    double current = 0.0;
    for (int i = values.size() - 1; i >= 0; --i) {
        values.at(i) = static_cast<int>(current);
        current += section;
    }
}

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
    const int MAX = 1'000;
    std::vector<int> v(100'000);

    fill_random(v, MAX);
    // print_vector(v);
    std::cout << std::is_sorted(v.begin(), v.end()) << "\n";

    auto start = std::chrono::high_resolution_clock::now();
    selection_sort(v);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration =
        std::chrono::duration_cast<std::chrono::microseconds>(
            stop - start);
    double total_time = duration.count() / 1'000'000.0;


    // print_vector(v);
    std::cout << std::is_sorted(v.begin(), v.end()) << "\n";

    std::cout << "Total time: " << total_time << "\n";

    return 0;
}
