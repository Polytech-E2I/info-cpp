#include <cstdlib>
#include "matrix.h"

int main(void)
{
    Matrix matrix{};

    matrix.remplir();
    matrix.print();

    matrix.transpose();
    matrix.print();

    matrix.transpose();
    matrix.print(Matrix::unidimensional);

    return EXIT_SUCCESS;
}
