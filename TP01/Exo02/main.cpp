#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>

using colonne_t = int;
using ligne_t = std::vector<colonne_t>;
using matrice_t = std::vector<ligne_t>;

void remplirMatrice(matrice_t& matrice)
{
    int indexLigne{1};
    for(auto& ligne: matrice)
    {
        std::cout << "Entrer la ligne " << indexLigne << " : ";

        for(auto& colonne: ligne)
        {
            std::cin >> colonne;
        }

        ++indexLigne;
    }
}

void printMatrice(const matrice_t& matrice, const bool uni = false)
{

    if(uni)
    {
        std::cout << "Vecteur " << matrice.size()*matrice.at(0).size() << " :\n";
    }
    else
    {
        std::cout << "Matrice "
             << matrice.size() << "x" << matrice.at(0).size() << " :\n";
    }

    for(const auto& ligne: matrice)
    {
        for(const auto& colonne: ligne)
        {
            std::cout << std::setw(4) << colonne << " ";
        }

        if(!uni)
        {
            std::cout << "\n";
        }
    }

    if(uni)
    {
        std::cout << "\n";
    }
}

matrice_t transposeMatrice(const matrice_t& inMatrice)
{
    matrice_t outMatrice(inMatrice.at(0).size(), ligne_t(inMatrice.size()));

    for(std::size_t iLigne{} ; iLigne < inMatrice.size() ; ++iLigne)
    {
        for(std::size_t iColonne{} ; iColonne < inMatrice.at(iLigne).size() ; ++iColonne)
        {
            outMatrice.at(iColonne).at(iLigne) = inMatrice.at(iLigne).at(iColonne);
        }
    }

    return outMatrice;
}

int main(void)
{
    std::size_t lignes{}, colonnes{};

    std::cout << "Combien de lignes ? ";
    std::cin >> lignes;
    std::cout << "Combien de colonnes ? ";
    std::cin >> colonnes;

    matrice_t matrice(lignes, ligne_t(colonnes));
    remplirMatrice(matrice);
    printMatrice(matrice);

    matrice_t matriceTransposee{ transposeMatrice(matrice) };
    printMatrice(matriceTransposee);

    printMatrice(matrice, true);


    return EXIT_SUCCESS;
}