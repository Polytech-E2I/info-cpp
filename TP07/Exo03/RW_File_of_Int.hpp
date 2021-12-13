#pragma once

#include "R_File_of_Int.hpp"
#include "W_File_of_Int.hpp"

template <typename T>
class RW_File_of_Int : public R_File_of_Int<T>, public W_File_of_Int<T>
{
public:
    RW_File_of_Int(const char* filename)
        : R_File_of_Int<T>(filename)
        , W_File_of_Int<T>(filename, true)
    {}
    ~RW_File_of_Int()
    {}

    bool operator!()
    {
        return W_File_of_Int<T>::operator!() || R_File_of_Int<T>::operator!();
    }

    void clear(std::ios_base::iostate state = std::ios_base::goodbit)
    {
        R_File_of_Int<T>::clear(state);
        W_File_of_Int<T>::clear(state);
    }

    void close()
    {
        R_File_of_Int<T>::close();
        W_File_of_Int<T>::close();
    }
};

