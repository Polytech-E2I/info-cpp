#ifndef __MATRIX_HPP
#define __MATRIX_HPP


#include <vector>
#include <array>

class Matrix
{
protected:
    using column_t = int;
    using row_t = std::vector<column_t>;
    using matrix_t = std::vector<row_t>;
private:
    matrix_t m_matrix{};
public:
    using value_t = column_t;
    using matrix_size_t = std::array<std::size_t, 2>;
    using matrix_coord_t = matrix_size_t;

    enum Dimension
    {
        multidimensional,
        unidimensional
    };

    Matrix();
    Matrix(const Matrix::matrix_t& init);
    //Matrix(const std::array<int, 3>& init);
    //Matrix(const std::array<std::array<int, 3>, 3>& init);

    matrix_size_t getSize() const;
    void setSize(const matrix_size_t& size);

    value_t getValue(matrix_coord_t coordinates) const;
    void setValue(matrix_coord_t coordinates, const value_t value);

    void fill();
    void print(const bool dimension = multidimensional) const;
    void transpose();
};

#endif//__MATRIX_HPP