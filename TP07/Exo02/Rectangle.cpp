#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(double x, double y, double longueur, double largeur)
    : Forme(x, y)
    , m_longueur{ longueur }
    , m_largeur{ largeur }
{
    std::cout << "- Rectangle::Rectangle -";
}

Rectangle::~Rectangle()
{
    std::cout << "- Rectangle::~Rectangle -";
}

double Rectangle::perimetre() const
{
    return 2*m_longueur + 2*m_largeur;
}

double Rectangle::surface() const
{
    return m_longueur * m_largeur;
}

void Rectangle::print(std::ostream& out) const
{
    out << "Rectangle (" << m_x << "," << m_y << ")" << " L=" << m_longueur << " l=" << m_largeur;
}