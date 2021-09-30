#include <vector>

class Matrice
{
private:
    using colonne_t = int;
    using ligne_t = std::vector<colonne_t>;
    using matrice_t = std::vector<ligne_t>;

    matrice_t m_matrice{};

public:
    enum Dimension
    {
        multidimensionnel = false,
        unidimensionnel = true
    };

    void remplir();
    void print(const bool uni = multidimensionnel);
    void transpose();
};
