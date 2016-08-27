// color your text in Windows console mode
// colors are 0=black 1=blue 2=green and so on to 15=white
// colorattribute = foreground + background * 16
// to get red text on yellow use 4 + 14*16 = 228
// light red on yellow would be 12 + 14*16 = 236
// a Dev-C++ tested console application by vegaseat 07nov2004

#include <iostream>
#include<stdio.h>
#include <windows.h> // WinApi header

using namespace std; // std::cout, std::cin

int main()
{
    HANDLE hConsole;
    int k;
    char ctxt[100];

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    scanf("%s", ctxt);

    scanf("%d", k);
    SetConsoleTextAttribute(hConsole, k);

    printf("%s\n", ctxt);


    return 0;
}
