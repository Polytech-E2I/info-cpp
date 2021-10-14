#include <iostream>
#include <cstdlib>

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
    Vecteur3d()
    {
        std::cout << "Q1a : Constructeur par défaut" << "\n";
    }
    Vecteur3d(double x, double y, double z)
    {
        std::cout << "Q1a : Constructeur avec paramètres" << "\n";
        m_x = x;
        m_y = y;
        m_z = z;
    }
    #elif QUESTION == Q1b
    Vecteur3d(double x=0, double y=0, double z=0)
    {
        std::cout << "Q1b : Constructeur par défaut avec paramètres" << "\n";
        m_x = x;
        m_y = y;
        m_z = z;
    }
    #elif QUESTION == Q1c
    Vecteur3d(double x=0, double y=0, double z=0)
    {
        std::cout << "Q1c : Constructeur par défaut avec paramètres et fonction inline" << "\n";
        init(x, y, z);
    }
    #elif QUESTION == Q1e
    Vecteur3d(double x=0, double y=0, double z=0)
    : m_x{x}, m_y{y}, m_z{z}
    {
        std::cout << "Q1e : Constructeur avec liste d'initialisation" << "\n";
    }
    #endif

    Vecteur3d(const Vecteur3d& object)
    : m_x{object.m_x}, m_y{object.m_y}, m_z{object.m_z}
    {
        std::cout << "Constructeur de copie" << "\n";
    }

    ~Vecteur3d()
    {
        std::cout << "Destructeur" << "\n";
    }

    void print() const
    {
        std::cout << "X : " << m_x << " / Y : " << m_y << " / Z : " << m_z << "\n";
    }
};

int main(void)
{
    const Vecteur3d vecteur0{};
    vecteur0.print();

    const Vecteur3d vecteur{3, 4, 8};
    vecteur.print();

    const Vecteur3d vecteurCopy{vecteur};
    vecteurCopy.print();

    return EXIT_SUCCESS;
}