#include "point.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

double Point::theta() const
{
         if(m_x > 0)             return atan(m_y / m_x);
    else if(m_x < 0 && m_y >= 0) return atan(m_y / m_x) + PI;
    else if(m_x < 0 && m_y < 0)  return atan(m_y / m_x) - PI;
    else if(m_x == 0 && m_y > 0) return PI / 2;
    else if(m_x == 0 && m_y < 0) return -PI / 2;
    else                         return INFINITY;
}

void Point::translation(double tx, double ty)
{
    m_x += tx;
    m_y += ty;
}

void Point::rotation(double angle)
{
    double temp_x = m_x;
    double temp_y = m_y;

    m_x = cos(angle) * temp_x - sin(angle) * temp_y;
    m_y = sin(angle) * temp_x + cos(angle) * temp_y;
}

void Point::afficheCartesien() const
{
    std::cout << std::fixed
        << "Coordonnées cartésiennes :"
        << "\tx\t= " << std::setprecision(2) << m_x
        << "\ty\t= " << std::setprecision(2) << m_y
        << "\n";
}

void Point::affichePolaire() const
{
    std::cout << std::fixed
        << "Coordonnées polaires :"
        << "\t\trho\t= " << std::setprecision(2) << rho()
        << "\ttheta\t= " << std::setprecision(2) << theta()
        << "\n";
}