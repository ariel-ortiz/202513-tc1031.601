#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {5, 1, 5, 1, 99};
    std::cout << size(a) << "\n";
    std::cout << cons_end(100, a) << "\n";
    std::cout << sum(a) << "\n";
    std::cout << duplicate(a) << "\n";
    std::cout << last(a) << "\n";
    std::cout << merge(IntList {1, 4, 6, 10}, IntList {0, 1, 2, 2, 5, 10, 14}) << "\n";
    return 0;
}
