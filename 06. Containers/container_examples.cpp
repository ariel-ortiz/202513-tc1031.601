#include <iostream>
#include <deque>
#include <forward_list>

int main()
{
    std::deque<char> my_deque;
    my_deque.push_front('a');
    my_deque.push_front('b');
    my_deque.push_front('c');
    my_deque.push_back('d');
    my_deque.push_back('e');
    my_deque.push_back('f');

    my_deque.pop_front();
    my_deque.pop_front();
    my_deque.pop_back();

    for (char c : my_deque) {
        std::cout << c << " ";
    }
    std::cout << "\n";
    std::cout << "size = " << my_deque.size() << "\n";
    std::cout << "max_size = " << my_deque.max_size() << "\n";

    std::forward_list<char> my_forward_list;
    my_forward_list.push_front('a');
    my_forward_list.push_front('b');
    my_forward_list.push_front('c');

    std::cout << my_forward_list.front() << "\n";
    my_forward_list.pop_front();
    for (char c : my_forward_list) {
        std::cout << c << " ";
    }
    std::cout << "\n";

}
