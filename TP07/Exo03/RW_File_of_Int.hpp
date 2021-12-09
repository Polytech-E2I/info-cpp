#pragma once

#include "R_File_of_Int.hpp"
#include "W_File_of_Int.hpp"

class RW_File_of_Int : public R_File_of_Int, public W_File_of_Int
{
public:
    RW_File_of_Int(const char* filename)
        : R_File_of_Int(filename)
        , W_File_of_Int(filename, true)
    {}
    ~RW_File_of_Int()
    {}

    void close();
};

