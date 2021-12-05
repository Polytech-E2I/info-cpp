#pragma once

#include <fstream>

class R_File_of_Int : public std::ifstream
{
public:
    R_File_of_Int(const char* filename)
        : std::ifstream(filename, std::ios_base::binary)
    {}
    ~R_File_of_Int()
    {}

    R_File_of_Int& operator>>(int& value);
};

