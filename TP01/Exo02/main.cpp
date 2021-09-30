#include <cstdlib>
#include "matrix/matrix.h"

int main(void)
{
    Matrix matrix{};

    matrix.fill();
    matrix.print();

    matrix.transpose();
    matrix.print();

    matrix.transpose();
    matrix.print(Matrix::unidimensional);

    return EXIT_SUCCESS;
}
