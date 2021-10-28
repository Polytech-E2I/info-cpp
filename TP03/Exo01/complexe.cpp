#include "complexe.hpp"
#include <iostream>

double Complexe::getRe() const
{
    return m_re;
}

double Complexe::getIm() const
{
    return m_im;
}

Complexe& Complexe::setRe(double a)
{
    m_re = a;

    return *this;
}

Complexe& Complexe::setIm(double b)
{
    m_im = b;

    return *this;
}

void Complexe::print() const
{
    std::cout << m_re << " " << (m_im >= 0 ? "+" : "-") << " " << (m_im >= 0 ? m_im : -m_im) << "i\n";
}

Complexe operator+(const Complexe& c1, const Complexe& c2)
{
    return Complexe{ c1.m_re + c2.m_re, c1.m_im + c2.m_im };
}

Complexe operator-(const Complexe& c1, const Complexe& c2)
{
    return Complexe{ c1.m_re - c2.m_re, c1.m_im - c2.m_im };
}

Complexe operator*(const Complexe& c1, const Complexe& c2)
{
    return Complexe
    {
        c1.m_re * c2.m_re - c1.m_im * c2.m_im,
        c1.m_re * c2.m_im + c2.m_re * c1.m_im
    };
}

std::ostream& operator<<(std::ostream& out, const Complexe& object)
{
    out << object.m_re << " " << (object.m_im >= 0 ? "+" : "-") << " " << (object.m_im >= 0 ? object.m_im : -object.m_im) << "i";

    return out;
}