#ifndef __VECTEUR3D_HPP
#define __VECTEUR3D_HPP

#include <iostream>

#define Q1a 1
#define Q1b 2
#define Q1c 3
#define Q1e 4 // La question 1d n'existe pas dans l'énoncé...

// Régler cette directive pour compiler pour chaque question
#define QUESTION Q1e

class Vecteur3d
{
private:
    double m_x{}, m_y{}, m_z{};

    inline void init(double x, double y, double z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

public:
    #if QUESTION == Q1a
    Vecteur3d();
    Vecteur3d(double x, double y, double z);

    #elif QUESTION == Q1b
    Vecteur3d(double x=0, double y=0, double z=0);

    #elif QUESTION == Q1c
    Vecteur3d(double x=0, double y=0, double z=0);

    #elif QUESTION == Q1e
    Vecteur3d(double x=0, double y=0, double z=0);

    #endif

    Vecteur3d(const Vecteur3d& object);

    ~Vecteur3d();

    inline void print() const
    {
        std::cout << "X : " << m_x << " / Y : " << m_y << " / Z : " << m_z << "\n";
    }
};

#endif//__VECTEUR3D_HPP