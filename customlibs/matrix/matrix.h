#include <vector>
#include <array>

class Matrix
{
private:
    using column_t = int;
    using row_t = std::vector<column_t>;
    using matrix_t = std::vector<row_t>;

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

    matrix_size_t getSize() const;
    void setSize(const matrix_size_t& size);

    value_t getValue(matrix_coord_t coordinates) const;
    void setValue(matrix_coord_t coordinates, const value_t value);

    void fill();
    void print(const bool dimension = multidimensional) const;
    void transpose();
};
