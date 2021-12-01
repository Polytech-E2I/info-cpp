#pragma once

class Coordonnees
{
public:
    virtual ~Coordonnees();

    void deplace(double x, double y);

protected:
    Coordonnees(double x = 0, double y = 0);

    double m_x;
    double m_y;
};