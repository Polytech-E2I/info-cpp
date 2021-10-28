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

Complexe Complexe::operator+=(const Complexe& c)
{
    m_re += c.m_re;
    m_im += c.m_im;

    return *this;
}

Complexe Complexe::operator+(const Complexe& c) const
{
    Complexe temp{ *this };
    return temp += c;
}

Complexe Complexe::operator-=(const Complexe& c)
{
    m_re -= c.m_re;
    m_im -= c.m_im;

    return *this;
}

Complexe Complexe::operator-(const Complexe& c) const
{
    Complexe temp{ *this };
    return temp -= c;
}

Complexe Complexe::operator*=(const Complexe& c)
{
    auto temp_re = m_re;
    auto temp_im = m_im;

    m_re = temp_re * c.m_re - temp_im * c.m_im;
    m_im = temp_re * c.m_im + temp_im * c.m_re;

    return *this;
}

Complexe Complexe::operator*(const Complexe& c) const
{
    Complexe temp{ *this };
    return temp *= c;
}

std::ostream& operator<<(std::ostream& out, const Complexe& object)
{
    out << object.m_re << " " << (object.m_im >= 0 ? "+" : "-") << " " << (object.m_im >= 0 ? object.m_im : -object.m_im) << "i";

    return out;
}