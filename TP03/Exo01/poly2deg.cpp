#include "poly2deg.hpp"
#include <iostream>
#include <cmath>

int Poly2deg::getA() const
{
    return m_a;
}

int Poly2deg::getB() const
{
    return m_b;
}

int Poly2deg::getC() const
{
    return m_c;
}

std::string Poly2deg::getString() const
{
    return std::string
    {
        std::to_string(m_a) + "x² + "
        + std::to_string(m_b) + "x + "
        + std::to_string(m_c)
    };
}

void Poly2deg::print() const
{
    std::cout << getString() << "\n";
}

std::ostream& operator<<(std::ostream& out, const Poly2deg& object)
{
    out << object.getString();

    return out;
}

Poly2deg::racines_t Poly2deg::solve() const
{
    racines_t racines{};

    double delta = m_b*m_b - 4*m_a*m_c;

    if(delta == 0)
    {
        racines[0].setRe(-m_b / (2.0*m_a)).setIm(0);
        racines[1].setRe(racines[0].getRe()).setIm(0);
    }
    else if(delta > 0)
    {
        racines[0].setRe((-m_b - sqrt(delta)) / (2.0*m_a)).setIm(0);
        racines[1].setRe((-m_b + sqrt(delta)) / (2.0*m_a)).setIm(0);
    }
    else
    {
        racines[0].setRe((-m_b / (2.0*m_a))).setIm(-sqrt(-delta)/(2.0*m_a));
        racines[1].setRe((-m_b / (2.0*m_a))).setIm(sqrt(-delta)/(2.0*m_a));
    }

    return racines;
}