#include "matrix.hpp"
#include "vecteur3d.hpp"
#include <iostream>
#include <cstdlib>

Matrix multiplyMatrixes(const Matrix& matrix1, const Matrix& matrix2)
{
    Matrix::matrix_size_t matrix1Size = matrix1.getSize();
    Matrix::matrix_size_t matrix2Size = matrix2.getSize();

    if(matrix1Size[1] != matrix2Size[0])
    {
        std::cerr << "Les tailles de matrices sont incompatibles !\n";
        exit(EXIT_FAILURE);
    }

    Matrix multiplied{};
    multiplied.setSize({ matrix1Size[0], matrix2Size[1] });

    Matrix::value_t sum{};
    for(std::size_t matrix1Row{} ; matrix1Row < matrix1Size[0] ; ++matrix1Row)
    {
        for(std::size_t matrix2Column{} ; matrix2Column < matrix2Size[1] ; ++matrix2Column)
        {
            sum = 0;

            for(std::size_t matrix1Column{} ; matrix1Column < matrix1Size[1] ; ++matrix1Column)
            {
                sum +=
                    matrix1.getValue({ matrix1Row, matrix1Column })
                    * matrix2.getValue({ matrix1Column, matrix2Column });
            }

            multiplied.setValue({ matrix1Row, matrix2Column }, sum);
        }
    }

    return multiplied;
}