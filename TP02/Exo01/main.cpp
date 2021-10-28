#include "vecteur3d.hpp"
#include <cstdlib>


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