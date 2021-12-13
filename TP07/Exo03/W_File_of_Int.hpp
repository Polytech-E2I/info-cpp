#pragma once

#include <fstream>

template <typename T>
class W_File_of_Int : protected std::ofstream
{
public:
    W_File_of_Int(const char* filename, bool append = false)
        : std::ofstream
            (
                filename,
                std::ios::binary
                    | (
                        append
                            // `ate | in` est nécessaire car `app` ne permet pas
                            // de ramener le curseur en arrière et `ate` seul
                            // provoque une troncature du fichier
                            ? std::ios::ate | std::ios::in
                            // On répète `binary` comme élément neutre car 0 ne
                            // compile pas (pas du bon type)
                            : std::ios::binary
                    )
            )
    {}
    ~W_File_of_Int()
    {}

    W_File_of_Int& operator<<(const T& value)
    {
        char char_value = static_cast<char>(value);

        this->write(&char_value, 1);

        return *this;
    }

    using std::ofstream::operator!;
    using std::ofstream::seekp;
    using std::ofstream::tellp;
    using std::ofstream::clear;
    using std::ofstream::close;
};

