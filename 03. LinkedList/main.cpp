#include <iostream>
#include "linkedlist.h"

int main()
{
    LinkedList<int> lst {2, 1, 5};
    std::cout << lst.to_string() << "\n";

    LinkedList<int> lst2;
    // lst2 = lst;

    return 0;
}
