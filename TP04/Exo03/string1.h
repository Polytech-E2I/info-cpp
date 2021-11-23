#pragma once

#include <cstddef>
#include <cstring>

class String
{
public:
    String(const char* string);
    String(char caractere, std::size_t repetition);
    String(const String& object);

    ~String();

    std::size_t longueur()                  const;
    char        nieme(std::size_t index)    const;
    char&       nieme(std::size_t index);
    void        affiche()                   const;
    void        saisie();
    void        concatene(const char* string);
    void        concatene(char caractere);
    friend bool egal(const String& string1, const String& string2);
    String      minuscule();

private:
    char*       m_array;

    void        destroy();
};