#include <iostream>

int main()
{
    int *p1 = new int {5};
    double *p2 = new double {3.14};
    int **p3 = new int*{p1};
    int *p4 = new int[4] {4, 8};

    std::cout << "*p1 = " << *p1 << "\n";
    std::cout << "*p2 = " << *p2 << "\n";
    std::cout << "**p3 = " << **p3 << "\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "*(p4 + " << i << ") = " << *(p4 + i) << "\n";
        std::cout << i << "[p4] = " << i[p4] << "\n";
    }

    delete p1;
    // delete p1;
    // std::cout << "*p1 = " << *p1 << "\n";
    delete p2;
    delete p3;
    delete [] p4;

    int a[10];

    a[10000] = 4;

    return 0;
}
