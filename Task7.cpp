#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void MovePlayer(int x,int y);
void gotoxy(int x,int y);

main()
{
    system("cls");
    int x=4,y=4;
    printMaze();
    MovePlayer(x,y);
    while(true)
    {
        MovePlayer(x,y);
        y=y+1;
        if(y==7)
        {
            y=2;
        }
    }
}
void MovePlayer(int x,int y)
{
    gotoxy(x,y);
    cout << "P";
    Sleep(100);
    gotoxy(x,y);
    cout << " ";
}
void printMaze()
{
    cout << "*********************" <<endl;
    cout << "*                   *" <<endl;
    cout << "*                   *" <<endl;
    cout << "*                   *" <<endl;
    cout << "*                   *" <<endl;
    cout << "*                   *" <<endl;
    cout << "*                   *" <<endl;
    cout << "*********************" <<endl;
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

