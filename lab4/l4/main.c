#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Pos = {68, 12};
    SetConsoleCursorPosition(hConsole, Pos);
    int n = 80;
    int m = 24;

    //for (int l = 0; l < 1; l +=2){
        for(int i = 0; i < 57 ; i++){
            COORD Pos1 = {Pos.X -i, Pos.Y};
            SetConsoleCursorPosition(hConsole, Pos1);
            printf("*");
        }

        COORD Pos2 = {Pos.X - 57, Pos.Y};
        SetConsoleCursorPosition(hConsole, Pos2);

        for(int j = 0; j < 57 ; j++){
            COORD Pos3 = {Pos.X, Pos.Y -j};
            SetConsoleCursorPosition(hConsole, Pos3);
            printf("*");
        }

    //}


    //for (int a = 0; a < 120; a++){
      //  printf("*");
    //}






    return 0;
}
