#pragma once

#include <fstream>

class W_File_of_Int : public std::ofstream
{
public:
    W_File_of_Int(const char* filename, bool append = false)
        : std::ofstream
            (
                filename,
                std::ios_base::binary
                    // On répète std::ios_base::binary dans le else ci-dessous
                    // car 0 ne compile pas
                    | (append ? std::ios::app : std::ios_base::binary)
            )
    {}
    ~W_File_of_Int()
    {}

    W_File_of_Int& operator<<(const std::intmax_t& value);
};

