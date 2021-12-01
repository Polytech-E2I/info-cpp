#pragma once

#include "Rectangle.hpp"

#include <iostream>

class Carre : public Rectangle
{
public:
    Carre(double x = 0, double y = 0, double cote = 1);

    virtual ~Carre();

    void print(std::ostream& out) const override;
};