#include <iostream>
#include "dinoset.h"

int main()
{
    DinoSet a, b;
    a.add(DinoId::velociraptor);
    a.add(DinoId::pteranodon);
    b.add(DinoId::velociraptor);
    b.add(DinoId::tyrannosaurus);
    DinoSet c = a + b;
    std::cout << "a = " << a.to_string() << "\n";
    std::cout << "b = " << b.to_string() << "\n";
    std::cout << "c = " << c.to_string() << "\n";
    return 0;
}
