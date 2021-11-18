#include "setofintegers.hpp"
#include <cassert>
#include <algorithm>


Set_Of_Integers& Set_Of_Integers::add(int element)
{
    assert(getCardinal() < getMax());

    m_container.push_back(element);

    return *this;
}

bool Set_Of_Integers::find(int element) const
{
    const auto result{ std::find(m_container.begin(), m_container.end(), element) };

    return (result != m_container.end());
}