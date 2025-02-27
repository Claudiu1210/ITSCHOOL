// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 int main()
{
  //  float x;
    //cin >> x;
    //cout <<"nr citit de la tastatura este: " << x<<endl;
      //  return 0;

        //float reducere = x + 19 / 100
          //  x = x - (x * 19) / 100
            //cout << " Pretul redus este :" << x;
        //int y = 10;
        //cout << endl << y / 3;
        //return 0;
//}

int numar;
cin >> numar;
int suma = 0;
int c3 = numar % 10;
cout << "Cifra 3=" << c3 << endl;
numar = numar / 10;
int c2 = numar % 10;
cout << "Cifra 2=" << c2 << endl;
numar /= 10;
int c1 = numar;
suma = c1 + c2 + c3;
cout << "Suma cifrelor este" << suma << ", iar numarul este " << numar << endl;
return 0;
}

 //  numar % 10 = > 3   //
 //numar = numar / 10;
//return 0;

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
