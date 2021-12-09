#pragma once

#include "Forme.hpp"

#include <iostream>

class Triangle : public Forme
{
public:
    // Triangle rectangle isocèles dont les deux côtés égaux valent `cote`
    Triangle(double x = 0, double y = 0, double cote = 1);

    virtual ~Triangle();

    double perimetre() const override;

    double surface() const override;

    void print(std::ostream& out) const override;

private:
    double m_cote;
};