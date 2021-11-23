#include <iostream>
#include "string2.h"

void main()
{
    String ch1("essai"), ch2 = ch1, ch3('=', 80);
    const String ch4("chaîne de caractères constante");

#if 0
    ch1[1] = 'E'; // le premier caractère de la chaîne
    cout << ch4[1] << endl;
    ch1 = "<<<< " + ch2 + " >>>>";
    cout << ch1 << endl;
    cin >> ch2;
    ch2 += " de la classe Strin";
    ch2 += 'g';

    if ( ch2 != "" )
    {
        cout << ch2 << endl;
    }

    cout << ch2.minuscule() << endl;
#endif
}