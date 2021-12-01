#include "Coordonnees.hpp"

Coordonnees::~Coordonnees()
{}

void Coordonnees::deplace(double x, double y)
{
    m_x += x;
    m_y += y;
}

Coordonnees::Coordonnees(double x, double y)
    : m_x{ x }
    , m_y{ y }
{}