#include <iostream>

int steps = 0;

// Complexity: O(2^N)
void hanoi(int n, char origin, char destiny, char aux)
{
    if (n == 1) {
        steps++;
        std::cout << steps << ".- Move disc " << n << " form " << origin << " to " << destiny << "\n";
        return;
    }
    hanoi(n - 1, origin, aux, destiny);
    steps++;
    std::cout << steps << ".- Move disc " << n << " from " << origin << " to " << destiny << "\n";
    hanoi(n - 1, aux, destiny, origin);
}

int main()
{
    hanoi(8, 'A', 'C', 'B');
    return 0;
}
