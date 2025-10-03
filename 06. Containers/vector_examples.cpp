#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

template<typename T>
void print_vector(const std::vector<T>& vec)
{
    for (T c: vec) {
        std::cout << c << " ";
    }
    std::cout << "\n";
}

// Return true if x should go before y
bool my_comparison_fun(int x, int y)
{
    return x > y;
}

bool cmp_abs_ascending(int x, int y)
{
    return abs(x) < abs(y);
}

int main()
{
    std::vector<char> a {'x', 'y', 'z'};
    a.reserve(10);

    std::cout << "Size = " << a.size() << "\n";
    std::cout << "Capacity = " << a.capacity() << "\n";

    a.push_back('a');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('b');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('c');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('d');
    std::cout << "Capacity = " << a.capacity() << "\n";
    a.push_back('e');
    std::cout << "Capacity = " << a.capacity() << "\n";

    std::cout << "Size = " << a.size() << "\n";

    a.at(5) = 'w';

    print_vector(a);

    std::cout << a.at(7) << "\n";

    std::vector<int> b {9, -5, 7, -1, 3, 8, 6, -4, 2};

    std::sort(b.begin(), b.end(), &my_comparison_fun);
    print_vector(b);

    std::sort(b.begin(), b.end(), &cmp_abs_ascending);
    print_vector(b);

    return 0;
}
