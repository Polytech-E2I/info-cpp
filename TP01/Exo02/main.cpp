#include <cstdlib>
#include <iostream>
#include "matrix/matrix.h"

int main(void)
{
    Matrix matrix{};

    std::cout << "==== DÉFINITION DE LA MATRICE ====\n";
    matrix.fill();

    std::cout << "\n";

    std::cout << "==== MATRICE ====\n";
    matrix.print();

    matrix.transpose();
    std::cout << "==== MATRICE TRANSPOSÉE ====\n";
    matrix.print();

    matrix.transpose();
    std::cout << "==== MATRICE COMME VECTEUR UNIDIMENSIONNEL ====\n";
    matrix.print(Matrix::unidimensional);

    return EXIT_SUCCESS;
}
