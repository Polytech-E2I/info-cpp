#include <vector>

class Matrix
{
private:
    using column_t = int;
    using row_t = std::vector<column_t>;
    using matrix_t = std::vector<row_t>;

    matrix_t m_matrix{};

public:
    enum Dimension
    {
        multidimensional = false,
        unidimensional = true
    };

    void fill();
    void print(const bool uni = multidimensional);
    void transpose();
};
