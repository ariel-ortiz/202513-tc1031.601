#include <iostream>
#include "intlist.h"
#include "recursion.h"

int main()
{
    IntList a {5, 1, 5, 1};
    std::cout << size(a) << "\n";
    std::cout << cons_end(100, a) << "\n";
    return 0;
}
