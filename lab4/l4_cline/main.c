#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int l = 80;
    const int h = 24;

    COORD Pos = {l - h/2-1,h/2};
    SetConsoleCursorPosition(hConsole, Pos);

    for (int i = 0 ;i < h/2 ; i++)
    {
        for (int a = 0 ; a < l - h + 2*i ; a++)
        {
            SetConsoleCursorPosition(hConsole, Pos);
            printf("*");
            Pos.X--;
            Sleep(10);
        }
        for (int b = 0 ; b < 2*i +1  ; b++)
        {
            SetConsoleCursorPosition(hConsole, Pos);
            printf("*");
            Pos.Y--;
            Sleep(10);
        }
        for (int c = 0 ; c < l - h + 2 * i +1; c++)
        {
            SetConsoleCursorPosition(hConsole, Pos);
            printf("*");
            Pos.X++;
            Sleep(10);
        }
        for (int d = 0 ; d < 2*i + 2 ; d++)
        {
            SetConsoleCursorPosition(hConsole, Pos);
            printf("*");
            Pos.Y++;
            Sleep(10);
        }

    }
    Sleep(10000);
    return 0;
}