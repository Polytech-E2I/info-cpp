#include "vecteur3d.hpp"
#include <iostream>

#if QUESTION == Q1a
Vecteur3d::Vecteur3d()
{
    std::cout << "Q1a : Constructeur par défaut" << "\n";
}
Vecteur3d::Vecteur3d(double x, double y, double z)
{
    std::cout << "Q1a : Constructeur avec paramètres" << "\n";
    m_x = x;
    m_y = y;
    m_z = z;
}
#elif QUESTION == Q1b
Vecteur3d::Vecteur3d(double x, double y, double z)
{
    std::cout << "Q1b : Constructeur par défaut avec paramètres" << "\n";
    m_x = x;
    m_y = y;
    m_z = z;
}
#elif QUESTION == Q1c
Vecteur3d::Vecteur3d(double x, double y, double z)
{
    std::cout << "Q1c : Constructeur par défaut avec paramètres et fonction inline" << "\n";
    init(x, y, z);
}
#elif QUESTION == Q1e
Vecteur3d::Vecteur3d(double x, double y, double z)
: m_x{x}, m_y{y}, m_z{z}
{
    std::cout << "Q1e : Constructeur avec liste d'initialisation" << "\n";
}
#endif

Vecteur3d::Vecteur3d(const Vecteur3d& object)
: m_x{object.m_x}, m_y{object.m_y}, m_z{object.m_z}
{
    std::cout << "Constructeur de copie" << "\n";
}

Vecteur3d::~Vecteur3d()
{
    std::cout << "Destructeur" << "\n";
}
