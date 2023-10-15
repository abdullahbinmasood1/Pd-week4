#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void n1();
void n2();
void n3();
void n4();
void n5();
void n6();
void n7();
main()
{
	system("cls");
	n1();
	n2();
	n3();	
	n5();
	n6();
	n7();	
}
void n1(){
	gotoxy(20,10);
	cout << "H";}
void n2(){
	gotoxy(20,11);
	cout << "A";}
void n3(){
	gotoxy(20,12);
	cout << "S";}
void n5(){
	gotoxy(20,13);
	cout << "S";}
void n6(){
	gotoxy(20,14);
	cout << "A";}
void n7(){
	gotoxy(20,15);
	cout << "N";}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}