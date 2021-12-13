#pragma once

#include <fstream>

template <typename T>
class R_File_of_Int : protected std::ifstream
{
public:
    R_File_of_Int(const char* filename)
        : std::ifstream(filename, std::ios_base::binary)
    {}
    ~R_File_of_Int()
    {}

    R_File_of_Int& operator>>(T& value)
    {
        value = 0;
        this->read(reinterpret_cast<char*>(&value), 1);

        return *this;
    }

    using std::ifstream::operator!;
    using std::ifstream::tellg;
    using std::ifstream::seekg;
    using std::ifstream::eof;
    using std::ifstream::clear;
    using std::ifstream::close;
};

