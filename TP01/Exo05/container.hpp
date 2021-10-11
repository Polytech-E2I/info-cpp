#include <iostream>

template <typename T>
long containerSum(const T& tableau)
{
    long returnValue{};

    for(const auto& element : tableau)
    {
        returnValue += element;
    }

    return returnValue;
}

template <typename T>
void printElementsAndSum(const T& tableau)
{
    std::cout << "Éléments : ";

    for(const auto& element : tableau)
    {
        std::cout << element << " ";
    }

    std::cout << "\n";

    std::cout << "Somme : " << containerSum(tableau) << "\n";
}