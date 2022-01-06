#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>

void clrscr()
{
    system("@cls||clear");
}

void gotoxy (int x, int y)
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(){
    clrscr();
    system("mode 80, 24");
    int x1,y1,x2,y2;
    x1 =0; y1 = 23; x2 = 79; y2 = 23;
    int rows = 24;
    int timeout = 30000;

    while (x1 < x2){
        for (int i = 0; i < rows; i++){
            gotoxy(x1, y1);
            printf("*");
            y1 -= 1;
            gotoxy (x2, y2);
            printf("*");
            y2 -=1;
            usleep(timeout);
        }
        x1 +=1;
        x2 -=1;
        for (int i = 0; i < rows; i++){
            y1 += 1;
            gotoxy(x1, y1);
            printf("*");
            y2 +=1;
            gotoxy (x2, y2);
            printf("*");
            usleep(timeout);
        }
        x1 +=1;
        x2 -=1;
    }
    return 0;
}
