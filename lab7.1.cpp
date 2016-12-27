/*
Лабораторная работа №7
Задание 1: Сохранить вводимые с клавиатуры данные в файл 
Алексей Шапран 
Группа: ИУ8-14
*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std; 

struct COMPUTER
{ 
	char ptype[64]; //тип процессора
	unsigned int freq; //тактовая частота
	unsigned int ram; //объем оперативной памяти
	unsigned int hdsize; //размер жесткого  диска
	char gctype[64]; //тип видеокарты
 };

int main(void)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int n; 
	//setlocale(LC_CTYPE, "rus");
	COMPUTER *pComputer; 
	cout << " The number of array elements: ";
	cin >> n;
	pComputer = new COMPUTER[n]; 
	for (unsigned int i = 0; i<n; ++i) 
		{ 
		cout << " Computer: " << i+1 << endl;
		cout << " Processor type: "; 
		fflush(stdin); 
		cin.getline(pComputer[i].ptype, 64);
		fflush(stdin); 
		cout << " Clock frequency: ";
		cin >> pComputer[i].freq;
		fflush(stdin); 
		cout << " RAM: ";
		cin >> pComputer[i].ram;
		fflush(stdin); 
		cout << " Hard disk size: ";
		fflush(stdin); 
		cin >> pComputer[i].hdsize;
		fflush(stdin);
		cout << " Graphics Card type: ";
		fflush(stdin); 
		cin.getline(pComputer[i].gctype, 64);
		fflush(stdin);
		}
	
	ofstream fout("C:\\cpp\\baumanclasses\\labs\\lab7\\text.txt", ios_base::app); 
    for (unsigned int i = 0; i<n; ++i) 
    {
    	fout << "Computer " << i+1 << endl << " Type of processor: " << pComputer[i].ptype << endl;
    	fout << " Clock frequency: "<< pComputer[i].freq << endl;
    	fout << " Random Access Memory: " << pComputer[i].ram << endl;
    	fout << " Hard disk size: " << pComputer[i].hdsize << endl;
    	fout << " Type of graphics card: " << pComputer[i].gctype << endl;
    }

    fout.close();
	fflush(stdin);
	delete [] pComputer;

		cout << endl << endl << "Press any button to exit the program" << endl;
	_getch();

	return 0;
}
