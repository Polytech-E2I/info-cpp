#include "Forme.hpp"
#include <iostream>

Forme::~Forme()
{
    std::cout << "- Forme::~Forme -" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Forme& object)
{
    object.print(out);

    return out;
}

Forme::Forme(double x, double y)
    : Coordonnees(x, y)
{
    std::cout << "- Forme::Forme -";
}