#include <iostream>
#include <iomanip>
#include "matrice.h"

void Matrice::remplir()
{
    std::size_t lignes{}, colonnes{};

    std::cout << "Combien de lignes ? ";
    std::cin >> lignes;
    std::cout << "Combien de colonnes ? ";
    std::cin >> colonnes;

    m_matrice.resize(lignes);

    int indexLigne{1};
    for(auto& ligne: m_matrice)
    {
        ligne.resize(colonnes);

        std::cout << "Entrer la ligne " << indexLigne << " : ";

        for(auto& colonne: ligne)
        {
            std::cin >> colonne;
        }

        ++indexLigne;
    }
}

void Matrice::print(const bool uni)
{

    if(uni)
    {
        std::cout << "Vecteur " << m_matrice.size()*m_matrice.at(0).size() << " :\n";
    }
    else
    {
        std::cout << "Matrice "
             << m_matrice.size() << "x" << m_matrice.at(0).size() << " :\n";
    }

    for(const auto& ligne: m_matrice)
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

void Matrice::transpose()
{
    matrice_t outMatrice(m_matrice.at(0).size(), ligne_t(m_matrice.size()));

    for(std::size_t iLigne{} ; iLigne < m_matrice.size() ; ++iLigne)
    {
        for(std::size_t iColonne{} ; iColonne < m_matrice.at(iLigne).size() ; ++iColonne)
        {
            outMatrice.at(iColonne).at(iLigne) = m_matrice.at(iLigne).at(iColonne);
        }
    }

    m_matrice = outMatrice;
}