#pragma once

#include "Coordonnees.hpp"
#include <iostream>

class Forme : public Coordonnees
{
public:
    virtual ~Forme();

    virtual double perimetre() const = 0;
    virtual double surface() const = 0;

    virtual void print(std::ostream& out) const = 0;

    friend std::ostream& operator<<(std::ostream& out, const Forme& object);

protected:
    Forme(double x = 0, double y = 0);
};
