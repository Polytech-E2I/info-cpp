#include "RW_File_of_Int.hpp"

void RW_File_of_Int::close()
{
    R_File_of_Int::close();
    W_File_of_Int::close();
}

