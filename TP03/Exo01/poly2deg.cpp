#include "poly2deg.hpp"
#include <iostream>
#include <cmath>

void Poly2deg::print() const
{
    std::cout << m_a << "x² + " << m_b << "x + " << m_c << "\n";
}

std::ostream& operator<<(std::ostream& out, const Poly2deg& object)
{
    out << object.m_a << "x² + " << object.m_b << "x + " << object.m_c;

    return out;
}

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