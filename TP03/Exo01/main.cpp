#include "complexe.hpp"
#include "poly2deg.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    const Complexe nombre1{3, 5};
    const Complexe nombre2{4, -2};

    nombre1.print();
    nombre2.print();

    std::cout << "Addition :\t\t"
        << "(" << nombre1 << ") + (" << nombre2 << ")"
        << " = (" << nombre1 + nombre2 << ").\n";
    std::cout << "Soustraction :\t\t"
        << "(" << nombre1 << ") - (" << nombre2 << ")"
        << " = (" << nombre1 - nombre2 << ").\n";
    std::cout << "Multiplication :\t"
        << "(" << nombre1 << ") * (" << nombre2 << ")"
        << " = (" << nombre1 * nombre2 << ").\n";

    const Poly2deg polynome{ 4, 5, 2 };
    polynome.print();

    Poly2deg::racines_t racines{ polynome.solve() };
    std::cout << "Racines du polynôme "<< polynome << " : (" << racines[0] << ") et (" << racines[1] << ")\n";

    return EXIT_SUCCESS;
}