#include <iostream>
#include <cstdlib>

#define Q1a 1
#define Q1b 2
#define Q1c 3
#define Q1e 4 // La question 1d n'existe pas dans l'énoncé...

// Régler cette directive pour compiler pour chaque question
#define QUESTION Q1b

class Vecteur3d
{
private:
    double m_x{}, m_y{}, m_z{};

    #if QUESTION == Q1b
    void init(double x, double y, double z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    #endif

public:
    #if QUESTION == Q1a
    Vecteur3d() {}
    Vecteur3d(double x, double y, double z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    #elif QUESTION == Q1b
    Vecteur3d()
    {
        init(0, 0, 0);
    }
    Vecteur3d(double x, double y, double z)
    {
        init(x, y, z);
    }
    #elif QUESTION == Q1c
    Vecteur3d(double x=0, double y=0, double z=0)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }
    #elif QUESTION == Q1e
    Vecteur3d(double x=0, double y=0, double z=0)
    : m_x{x}, m_y{y}, m_z{z}
    {}
    #endif
    Vecteur3d(const Vecteur3d& object)
    : m_x{object.m_x}, m_y{object.m_y}, m_z{object.m_z}
    {}

    void print() const
    {
        std::cout << "X : " << m_x << " / Y : " << m_y << " / Z : " << m_z << "\n";
    }
};

int main(void)
{
    const Vecteur3d vecteur0{};
    const Vecteur3d vecteur{3, 4, 8};

    vecteur0.print();
    vecteur.print();

    const Vecteur3d vecteurCopy{vecteur};
    vecteurCopy.print();

    return EXIT_SUCCESS;
}