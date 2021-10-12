#include "pile.hpp"
#include <iostream>
#include <iomanip>

void Pile::empiler(int element)
{
    if(m_nb_elem < m_max)
    {
        m_table[m_nb_elem] = element;
        ++m_nb_elem;

        if(m_nb_elem < m_max)
        {
            m_etat = ok;
        }
        else if(m_nb_elem == m_max)
        {
            m_etat = plein;
        }
    }
    else
    {
        std::cerr << "Erreur : pile pleine !\n";
        exit(EXIT_FAILURE);
    }
}

int Pile::depiler()
{
    if(m_nb_elem > 0)
    {
        --m_nb_elem;

        if(m_nb_elem > 0)
        {
            m_etat = ok;
        }
        else if(m_nb_elem == 0)
        {
            m_etat = vide;
        }

        return m_table[m_nb_elem];
    }
    else
    {
        std::cerr << "Erreur : pile vide !\n";
        exit(EXIT_FAILURE);
    }
}

void Pile::afficher()
{
    std::cout << "État de la pile n." << m_id << " (max = " << m_max << "):\n";
    for(int i{} ; i < m_nb_elem ; ++i)
    {
        std::cout << std::setw(2) << i << " : " << m_table[i] << "\n";
    }
}

int Pile::nb_elements()
{
    return m_nb_elem;
}

int Pile::nb_piles()
{
    return Pile::m_nb_piles;
}