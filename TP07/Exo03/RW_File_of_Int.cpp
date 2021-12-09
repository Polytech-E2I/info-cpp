#include "RW_File_of_Int.hpp"

void RW_File_of_Int::close()
{
    R_File_of_Int::close();
    W_File_of_Int::close();
}

bool RW_File_of_Int::operator!()
{
    return W_File_of_Int::operator!() || R_File_of_Int::operator!();
}

void RW_File_of_Int::clear(std::ios_base::iostate state)
{
    R_File_of_Int::clear(state);
    W_File_of_Int::clear(state);
}
