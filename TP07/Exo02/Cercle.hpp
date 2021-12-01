#pragma once

#include "Forme.hpp"

#include <iostream>
#include <cmath>
constexpr double G_PI{ std::acos(-1) };

class Cercle : public Forme
{
public:
    Cercle(double x = 0, double y = 0, double rayon = 1);

    virtual ~Cercle();

    double perimetre() const override;

    double surface() const override;

    void print(std::ostream& out) const override;

private:
    double m_rayon;
};