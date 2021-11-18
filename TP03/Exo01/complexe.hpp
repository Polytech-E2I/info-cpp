#ifndef __COMPLEXE_HPP
#define __COMPLEXE_HPP

#include <iostream>

class Complexe
{
public:
    Complexe(double re=0, double im=0)
        : m_re{ re }
        , m_im{ im }
    {}

    Complexe(const Complexe& object)
        : m_re{ object.m_re }
        , m_im{object.m_im }
    {}

    ~Complexe(){}

    double getRe() const;
    double getIm() const;

    Complexe& setRe(double a);
    Complexe& setIm(double b);

    void print() const;

    Complexe operator+=(const Complexe& c);
    Complexe operator-=(const Complexe& c);
    Complexe operator*=(const Complexe& c);
    Complexe operator+ (const Complexe& c) const;
    Complexe operator- (const Complexe& c) const;
    Complexe operator* (const Complexe& c) const;

    friend std::ostream& operator<<(std::ostream& out, const Complexe& object);

private:
    double m_re;
    double m_im;
};

#endif//__COMPLEXE_HPP