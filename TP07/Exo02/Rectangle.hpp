#pragma once

#include "Forme.hpp"

#include <iostream>

class Rectangle : public Forme
{
public:
    Rectangle(double x = 0, double y = 0, double longueur = 1, double largeur = 1);

    virtual ~Rectangle();

    double perimetre() const override;

    double surface() const override;

    void print(std::ostream& out) const override;

protected:
    double m_longueur;
    double m_largeur;
};