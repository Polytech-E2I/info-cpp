#include "W_File_of_Int.hpp"

W_File_of_Int& W_File_of_Int::operator<<(const std::intmax_t& value)
{
    char char_value = static_cast<char>(value);

    this->write(&char_value, 1);

    return *this;
}
