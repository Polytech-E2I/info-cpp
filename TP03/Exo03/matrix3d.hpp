#ifndef __MATRIX3D_HPP
#define __MATRIX3D_HPP

#include "matrix.hpp"

class Matrix3d : public Matrix
{
public:
    Matrix3d(const std::array<std::array<int, 3>, 3>& init = { { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} } })
    :   Matrix
        {
            {
                Matrix::row_t(init[0].begin(), init[0].end()),
                Matrix::row_t(init[1].begin(), init[1].end()),
                Matrix::row_t(init[2].begin(), init[2].end())
            }
        }
    {}
};

#endif//__MATRIX3D_HPP