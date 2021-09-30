#include <cstdlib>
#include "matrice.h"

int main(void)
{
    Matrice matrice{};

    matrice.remplir();
    matrice.print();

    matrice.transpose();
    matrice.print();

    matrice.transpose();
    matrice.print(Matrice::unidimensionnel);

    return EXIT_SUCCESS;
}
