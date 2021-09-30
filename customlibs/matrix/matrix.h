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
    using matrix_size_t = std::array<std::size_t, 2>;
    enum Dimension
    {
        multidimensional,
        unidimensional
    };

    matrix_size_t getSize() const;
    void fill();
    void print(const bool dimension = multidimensional) const;
    void transpose();
};
