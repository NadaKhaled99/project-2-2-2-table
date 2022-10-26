/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   const int TableSize = 20;
int i = 0;
long Entry = 1;
cout << "i" << "\t\t" << "2 ** i" << endl;
while (i < TableSize) {
cout << i << "\t\t" << Entry << endl;
Entry = 2 * Entry;
++i;
}


    return 0;
}

