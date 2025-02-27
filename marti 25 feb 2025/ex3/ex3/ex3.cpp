// ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "string.h"
using namespace std;
int main()
{
    /*string s;
    cin >> s;
    cout << "Lungimea lui s este " << s.size() << "    " << s.length() << endl;
    return 0;
  */
    //string s1;
    //cin >> s1;
    //string s2 = " are mere";
    ////s1 = s1 + s2; // strcat(s1, s2)
    //s1.append(s2);
    //cout << "S1=" << s1 << endl;
    //cout << "S2=" << s2 << endl;
    //return 0;

    string s1 = "ana";
    string s2 = "ana";
    // 0 daca sunt egale
    //1 daca s1 >
    //-1 daca s2 >

    cout << (s1 == s2) << s1.compare(s2) << endl;
    // s1 == s2
    // true sau 1 daca sunt egale
    // false sau 0 daca sunt diferite
    return 0;
}


//int x = 5;
//std::cout << "Valoarea initiala: " << x << std::endl;
//
//int y = x--; // y primește valoarea veche a lui x (5), iar x devine 4
//// y = x;
//// x = x - 1;
//
//int y = --x;
//// x = x - 1;
//// y = x;
//std::cout << "Dupa y = x--: y = " << y << ", x = " << x << std::endl;
//
//int z = --x; // x este decrementat la 3, apoi z primește 3
//std::cout << "Dupa z = x: z = " << z << ", x = " << x << std::endl;
//
//int a = z-- - --y; // 3 - 4 = -1 , 2

//?caz_true:caz_false
 //int numar = 7;
 //std::cout << numar << " este " << ((numar % 2 == 0) ? "par" : "impar") << std::endl;

 //int a = 7;
 //int b = 8;
 //int maxim = (a > b) ? a : b;  // Dacă a > b, returnează a; altfel, returnează b.
 //std::cout << "Maximul dintre " << a << " si " << b << " este: " << maxim << std::endl;
 



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
