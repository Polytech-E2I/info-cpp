#pragma once

#include <cstddef>
#include <cstring>
#include <iostream>

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
    void        concatene(const String& object);
    void        concatene(const char* string);
    void        concatene(char caractere);
    friend bool egal(const String& string1, const String& string2);
    String      minuscule();

    String&     operator= (const String& object);
    String&     operator+=(const String& object);
    String&     operator+(const String& object);
    String&     operator+=(const char* string);
    String&     operator+(const char* string);
    String&     operator+=(char caractere);
    String&     operator+(char caractere);

    friend std::ostream& operator<<(std::ostream& out, const String& object);

    char&       operator[] (int index);
    const char& operator[] (int index) const;

private:
    char*       m_array;

    void        destroy();
    void        copy(const String& object);
};

String operator+(const char* string, const String& object);
String operator+(char caractere, const String& object);