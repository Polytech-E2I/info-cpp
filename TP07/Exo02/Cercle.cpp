#include "Cercle.hpp"
#include <iostream>

Cercle::Cercle(double x, double y, double rayon)
    : Forme(x, y)
    , m_rayon{ rayon }
{
    std::cout << "- Cercle::Cercle -";
}

Cercle::~Cercle()
{
    std::cout << "- Cercle::~Cercle -";
}

double Cercle::perimetre() const
{
    return 2*G_PI*m_rayon;
}

double Cercle::surface() const
{
    return G_PI*m_rayon*m_rayon;
}

void Cercle::print(std::ostream& out) const
{
    out << "Cercle (" << m_x << "," << m_y << ")" << " r=" << m_rayon;
}