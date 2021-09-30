#include <iostream>
#include <iomanip>
#include "matrix.h"

Matrix::Matrix(const Matrix::matrix_t& init)
{
    for(const auto& row: init)
    {
        m_matrix.push_back(row);
    }
}

Matrix::matrix_size_t Matrix::getSize() const
{
    return { m_matrix.size(), m_matrix.at(0).size() };
}

void Matrix::setSize(const Matrix::matrix_size_t& size)
{
    m_matrix.resize(size.at(0));

    for(auto& ligne: m_matrix)
    {
        ligne.resize(size.at(1));
    }
}

Matrix::value_t Matrix::getValue(Matrix::matrix_coord_t coordinates) const
{
    return m_matrix.at(coordinates.at(0)).at(coordinates.at(1));
}

void Matrix::setValue(Matrix::matrix_coord_t coordinates, const Matrix::value_t value)
{
    m_matrix.at(coordinates.at(0)).at(coordinates.at(1)) = value;
}

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

void Matrix::print(const bool dimension) const
{

    if(dimension == Matrix::unidimensional)
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

        if(dimension == Matrix::multidimensional)
        {
            std::cout << "\n";
        }
    }

    if(dimension == Matrix::unidimensional)
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