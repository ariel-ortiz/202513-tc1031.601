#include <iostream>
#include <vector>
#include "treeset.h"

std::vector<char> global_char_vector;

int global_int_accum = 0;

template<typename T>
void print_something(T c)
{
    std::cout << c << " ";
}

template<typename T>
void add_to_vector(T c)
{
    global_char_vector.push_back(c);
}

void add_global_int_accum(int n)
{
    global_int_accum += n;
}

int main()
{
    TreeSet<char> a {'f', 'd', 'a', 'g', 'e', 'c', 'b'};
    a.inorder(print_something<char>);
    std::cout << "\n";
    a.inorder(add_to_vector<char>);
    std::cout << global_char_vector[2] << "\n";
    TreeSet<int> b {11, 7, 15, 9, 3, 17, 12};
    b.inorder(print_something<int>);
    std::cout << "\n";
    b.inorder(add_global_int_accum);
    std::cout << global_int_accum << "\n";
    a.levelorder(print_something<char>);
    std::cout << "\n";
    b.levelorder(print_something<int>);
    std::cout << "\n";
    std::cout << "Is full? " << b.is_full() << "\n";
    std::cout << "Is Perfect? " << b.is_perfect() << "\n";
    b.add(8);
    std::cout << "Is full? " << b.is_full() << "\n";
    b.add(10);
    std::cout << "Is full? " << b.is_full() << "\n";
    std::cout << "Leaf Count " << b.leaf_count() << "\n";
    std::cout << "Is Perfect? " << b.is_perfect() << "\n";

    return 0;
}
