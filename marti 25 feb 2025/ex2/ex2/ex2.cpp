// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "string.h"
using namespace std;
int main()
{    // ex 1
	//char s1[100] = " Ana are mere";
	/*char s2[100];
	cin >> s2;
	cout << endl << "S2=" << s2 << endl;

	strcat_s(s1, s2);  */// invers daca vrem sirul 2 sa inceapa
/*	cout << "Rez=" << s1 << endl; */// invers daca vrem sirul 2 sa inceapa
	/*return 0;*/
	// invers daca vrem sirul 2 sa inceapa
	// ex 2
	/*char s1[100] = " Ana are mere";
	int dim = strlen(s1); 
	cout << "Dimensiunea lui s1 este:" << dim << endl;
	return 0;*/
	//Scrie un program care compară două șiruri și afișează mesajul "Egale" sau "Diferite".
	char s1[100] = " Ana are mere";
	char s2[100] = " Ana are mere";
	int res = strcmp(s1, s2);
	cout << "Dimensiunea lui s1 este:" << res << endl;
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
