#include "setofintegers.hpp"
#include <cassert>

Set_Of_Integers::Set_Of_Integers(const Set_Of_Integers& object)
: m_cardinal{ object.m_cardinal }
{
    assert(object.m_cardinal <= m_max);

    for(int i{} ; i < object.m_cardinal ; ++i)
    {
        m_tableau[i] = object.m_tableau[i];
    }
}

Set_Of_Integers::~Set_Of_Integers()
{
    delete[] m_tableau;
    m_tableau = nullptr;
}

Set_Of_Integers& Set_Of_Integers::add(int element)
{
    assert(m_cardinal < m_max);

    m_tableau[m_cardinal] = element;
    ++m_cardinal;

    return *this;
}

int Set_Of_Integers::getCardinal() const
{
    return m_cardinal;
}

int Set_Of_Integers::getMax() const
{
    return m_max;
}

bool Set_Of_Integers::find(int element) const
{
    for(int i{} ; i < m_cardinal ; ++i)
    {
        if(m_tableau[i] == element)
        {
            return true;
        }
    }

    return false;
}