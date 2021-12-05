#include "R_File_of_Int.hpp"

R_File_of_Int& R_File_of_Int::operator>>(int& value)
{
    this->read(reinterpret_cast<char*>(&value), 1);

    return *this;
}
