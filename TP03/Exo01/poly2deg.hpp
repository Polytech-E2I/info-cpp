#ifndef __POLY2DEG_HPP
#define __POLY2DEG_HPP

#include "complexe.hpp"
#include <array>

class Poly2deg
{
public:
    Poly2deg(int a=0, int b=0, int c=0)
        : m_a{ a }
        , m_b{ b }
        , m_c{ c }
    {}

    Poly2deg(const Poly2deg& object)
        : m_a{ object.m_a }
        , m_b{ object.m_b }
        , m_c{ object.m_c }
    {}

    ~Poly2deg(){}

    int         getA() const;
    int         getB() const;
    int         getC() const;
    std::string getString() const;

    void print() const;
    friend std::ostream& operator<<(std::ostream& out, const Poly2deg& object);

    using racines_t = std::array<Complexe, 2>;
    racines_t solve() const;

private:
    int m_a;
    int m_b;
    int m_c;
};

#endif//__POLY2DEG_HPP