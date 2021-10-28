#include "matrix.hpp"
#include "matrix3d.hpp"
#include "vecteur3d.hpp"
#include <iostream>
#include <cstdlib>


int main()
{
    Vecteur3d   vecteur{ {3, 5, 1 } };
    Matrix3d matrice
    {
        {
            {
                {4, 5, 2},
                {3, 2, 7},
                {25, 4, 53}
            }
        }
    };

    vecteur.print();
    matrice.print();

    return EXIT_SUCCESS;
}