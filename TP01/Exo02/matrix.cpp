#include <iostream>
#include <iomanip>
#include "matrix.h"

void Matrix::fill()
{
    std::size_t rows{}, columns{};

    std::cout << "Combien de lignes ? ";
    std::cin >> rows;
    std::cout << "Combien de colonnes ? ";
    std::cin >> columns;

    m_matrix.resize(rows);

    int iLine{1};
    for(auto& row: m_matrix)
    {
        row.resize(columns);

        std::cout << "Entrer la ligne " << iLine << " : ";

        for(auto& column: row)
        {
            std::cin >> column;
        }

        ++iLine;
    }
}

void Matrix::print(const bool uni)
{

    if(uni)
    {
        std::cout << "Vecteur " << m_matrix.size()*m_matrix.at(0).size() << " :\n";
    }
    else
    {
        std::cout << "Matrice "
             << m_matrix.size() << "x" << m_matrix.at(0).size() << " :\n";
    }

    for(const auto& row: m_matrix)
    {
        for(const auto& column: row)
        {
            std::cout << std::setw(4) << column << " ";
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

void Matrix::transpose()
{
    matrix_t outMatrix(m_matrix.at(0).size(), row_t(m_matrix.size()));

    for(std::size_t iLine{} ; iLine < m_matrix.size() ; ++iLine)
    {
        for(std::size_t iColumn{} ; iColumn < m_matrix.at(iLine).size() ; ++iColumn)
        {
            outMatrix.at(iColumn).at(iLine) = m_matrix.at(iLine).at(iColumn);
        }
    }

    m_matrix = outMatrix;
}