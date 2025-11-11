#include <iostream>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int x = 0;
    std::cout << x << "! = " << factorial(x) << "\n";
    x = 4;
    std::cout << x << "! = " << factorial(x) << "\n";
    x = 5;
    std::cout << x << "! = " << factorial(x) << "\n";
    x = 13;
    std::cout << x << "! = " << factorial(x) << "\n";

    return 0;
}
