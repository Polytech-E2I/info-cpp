#ifndef __VECTEUR3D_HPP
#define __VECTEUR3D_HPP

#include "matrix.hpp"

class Vecteur3d : public Matrix
{
public:
    Vecteur3d(std::array<int, 3> values = {{0, 0, 0}})
    :   Matrix{ { Matrix::row_t(values.begin(), values.end()) } }
    {}
};

#endif//__VECTEUR3D_HPP