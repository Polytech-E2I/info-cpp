#include "setofintegers.hpp"
#include <cassert>
#include <algorithm>

#if QUESTION == Q21 || QUESTION == Q22

Set_Of_Integers::Set_Of_Integers(const Set_Of_Integers& object)
: m_cardinal{ object.m_cardinal }
{
    assert(object.m_cardinal <= m_max);

    for(int i{} ; i < object.m_cardinal ; ++i)
    {
        m_container[i] = object.m_container[i];
    }
}

Set_Of_Integers::~Set_Of_Integers()
{
    delete[] m_container;
    m_container = nullptr;
}

Set_Of_Integers& Set_Of_Integers::add(int element)
{
    assert(m_cardinal < m_max);

    m_container[m_cardinal] = element;
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
        if(m_container[i] == element)
        {
            return true;
        }
    }

    return false;
}

#else

Set_Of_Integers::Set_Of_Integers(const Set_Of_Integers& object)
: m_container{ object.m_container }
{}

Set_Of_Integers::~Set_Of_Integers() {}

Set_Of_Integers& Set_Of_Integers::add(int element)
{
    m_container.push_back(element);

    return *this;
}

int Set_Of_Integers::getCardinal() const
{
    return m_container.size();
}

int Set_Of_Integers::getMax() const
{
    return m_container.max_size();
}

bool Set_Of_Integers::find(int element) const
{
    const auto result{ std::find(m_container.begin(), m_container.end(), element) };

    return (result != m_container.end());
}
#endif