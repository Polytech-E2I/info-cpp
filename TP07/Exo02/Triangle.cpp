#include "Triangle.hpp"
#include <iostream>

Triangle::Triangle(double x, double y, double cote)
    : Forme(x, y)
    , m_cote{ cote }
{
    std::cout << "- Triangle::Triangle -";
}

Triangle::~Triangle()
{
    std::cout << "- Triangle::~Triangle -";
}

double Triangle::perimetre() const
{
    return 3*m_cote;
}

double Triangle::surface() const
{
    return m_cote*m_cote/2;
}

void Triangle::print(std::ostream& out) const
{
    out << "Triangle (" << m_x << "," << m_y << ")" << " c=" << m_cote;
}