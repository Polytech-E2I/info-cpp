#include "Carre.hpp"
#include <iostream>

Carre::Carre(double x, double y, double cote)
    : Rectangle(x, y, cote, cote)
{
    std::cout << "- Carre::Carre -";
}

Carre::~Carre()
{
    std::cout << "- Carre::~Carre -";
}

void Carre::print(std::ostream& out) const
{
    out << "Carre (" << m_x << "," << m_y << ")" << " c=" << m_longueur;
}