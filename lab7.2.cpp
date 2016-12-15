/*
Лабораторная работа №7
Задание 2: Вывести на экран текст из файла text.txt 
Алексей Шапран 
Группа: ИУ8-14
*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <clocale>
#include <conio.h>
using namespace std; 

int main(void)
{
	char txt[50];

	setlocale(LC_CTYPE, "rus"); 
	ifstream fin("C:\\cpp\\baumanclasses\\labs\\lab7\\text.txt");
	if(!fin.is_open()) cout << "Error: File was not found!" << endl;
		else 
		{
			while (!fin.getline(txt, sizeof(txt)).eof())
			{
				cout << txt << endl;
			}

			fin.close();
		} 
		
		cout << endl << endl << "Press any button to exit the program" << endl;
	_getch();

	return 0;
}