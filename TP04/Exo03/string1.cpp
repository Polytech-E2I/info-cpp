#include "string1.h"
#include <cassert>
#include <iostream>


String::String(const char* string)
    : m_array{ new char[std::strlen(string) + 1] }
{
    for(std::size_t i{} ; i < std::strlen(string) ; ++i)
    {
        m_array[i] = string[i];
    }

    m_array[std::strlen(string)] = '\0';
}

String::String(char caractere, std::size_t repetition)
    : m_array{ new char[repetition + 1] }
{
    for(std::size_t i{} ; i < repetition ; ++i)
    {
        m_array[i] = caractere;
    }

    m_array[repetition] = '\0';
}

String::String(const String& object)
    : m_array{ new char[object.longueur() + 1] }
{
    for(std::size_t i{} ; i <= object.longueur() ; ++i)
    {
        m_array[i] = object.m_array[i];
    }

    m_array[object.longueur()] = '\0';
}

String::~String()
{
    destroy();
}

void String::destroy()
{
    if(m_array)
    {
        delete[] m_array;
        m_array = nullptr;
    }
}

std::size_t String::longueur()  const
{
    return std::strlen(m_array);
}

char        String::nieme(std::size_t index)     const
{
    assert(index < longueur() + 1);
    return m_array[index - 1];
}
char&       String::nieme(std::size_t index)
{
    assert(index < longueur() + 1);
    return m_array[index - 1];
}

void        String::affiche()   const
{
    std::cout << m_array << "\n";
}

void        String::saisie()
{
    destroy();

    constexpr std::size_t string_max = 1024;

    m_array = new char[string_max + 1];

    std::cout << "Entrez une chaîne de caractères (max "<< string_max <<") : ";
    std::cin.getline(m_array, string_max + 1);
}

void        String::concatene(const char* string)
{
    auto* new_array{ new char[longueur() + std::strlen(string) + 1] };
    std::strcpy(new_array, m_array);

    destroy();
    m_array = new_array;

    std::strcat(m_array, string);
}

void        String::concatene(char caractere)
{
    char string[]{ caractere, '\0' };

    concatene(string);
}

bool egal(const String& string1, const String& string2)
{
    return std::strcmp(string1.m_array, string2.m_array) == 0;
}

String      String::minuscule()
{
    auto* new_array{ new char[longueur() + 1] };

    for(std::size_t i{} ; i < longueur() ; ++i)
    {
        if(m_array[i] >= 'A' && m_array[i] <= 'Z')
        {
            new_array[i] = m_array[i] + ('a' - 'A');
        }
        else
        {
            new_array[i] = m_array[i];
        }
    }

    new_array[longueur()] = '\0';

    return String{ new_array };
}