#include "pch.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

char poz1_1, poz1_2, poz1_3, poz2_1, poz2_2, poz2_3, poz3_1, poz3_2, poz3_3;
int choice1, choice2, player;
int status = 0; //0 - w trakcie 1 - wygral krzyzyk 2 - wygralo kolko 3 remis
int i = 0;
int test;

int RysujPlansze(int wybor1, int wybor2, int gracz) { // kordynaty oraz rodzaj gracza

	system("CLS");
	switch (wybor1) { // wybor wiersza 
	case 1:
		switch (wybor2) { // wybor kolumny
		case 1:
			if (poz1_1 == 'X' || poz1_1 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				 test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz1_1 = 'X';
				else poz1_1 = 'O';
				test = 0;
			}
			break;
		case 2:
			if (poz1_2 == 'X' || poz1_2 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz1_2 = 'X';
				else poz1_2 = 'O';
				test = 0;
			}
			break;
		case 3:
			if (poz1_3 == 'X' || poz1_3 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz1_3 = 'X';
				else poz1_3 = 'O';
				test = 0;
			}
			break;
		default:
			cout << "Mordo zly wybor" << endl;
			break;
			}
		break;
	case 2:
		switch (wybor2) { // wybor kolumny
		case 1:
			if (poz2_1 == 'X' || poz2_1 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz2_1 = 'X';
				else poz2_1 = 'O';
				test = 0;
			}
			break;
		case 2:
			if (poz2_2 == 'X' || poz2_2 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz2_2 = 'X';
				else poz2_2 = 'O';
				test = 0;
			}
			break;
		case 3:
			if (poz2_3 == 'X' || poz2_3 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz2_3 = 'X';
				else poz2_3 = 'O';
				test = 0;
			}
			break;
		default:
			cout << "Mordo zly wybor" << endl;
			break;
		}
		break;
	case 3:
		switch (wybor2) { // wybor kolumny
		case 1:
			if (poz3_1 == 'X' || poz3_1 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz3_1 = 'X';
				else poz3_1 = 'O';
				test = 0;
			}
			break;
		case 2:
			if (poz3_2 == 'X' || poz3_2 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz3_2 = 'X';
				else poz3_2 = 'O';
				test = 0;
			}
			break;
		case 3:
			if (poz3_3 == 'X' || poz3_3 == 'O') {
				cout << "To pole jest juz zajete" << endl;
				test = 1;
				break;
			}
			else
			{
				if (gracz == 1) // 1 to krzyzyk 2 to kolko
					poz3_3 = 'X';
				else poz3_3 = 'O';
				test = 0;
			}
			break;
		default:
			cout << "Mordo zly wybor" << endl;
			break;
		}
		break;
	}
	cout << "   1 2 3"  << endl;
	cout << "1 |" << poz1_1 << "|" << poz1_2 << "|" << poz1_3 << "|" << endl;
	cout << "2 |" << poz2_1 << "|" << poz2_2 << "|" << poz2_3 << "|" << endl;
	cout << "3 |" << poz3_1 << "|" << poz3_2 << "|" << poz3_3 << "|" << endl;
	if (test == 1) {
		return 1;
	}
	else return 0;
}
int Sprawdzanie(char ftest){
	if (poz1_1 == ftest && poz1_2 == ftest && poz1_3 == ftest) {
		if(ftest == 'X')
		return 1;
		else return 2;
	}
	if (poz2_1 == ftest && poz2_2 == ftest && poz2_3 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz3_1 == ftest && poz3_2 == ftest && poz3_3 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz1_1 == ftest && poz2_1 == ftest && poz3_1 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz1_2 == ftest && poz2_2 == ftest && poz3_2 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz1_3 == ftest && poz2_3 == ftest && poz3_3 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz1_1 == ftest && poz2_2 == ftest && poz3_3 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	if (poz1_3 == ftest && poz2_2 == ftest && poz3_1 == ftest) {
		if (ftest == 'X')
			return 1;
		else return 2;
	}
	else return 0;

}

int main()
{
	choice1 = 0;
	choice2 = 0;
	RysujPlansze(choice1, choice2, player);
	do {
		if (i % 2 == 0) {
			player = 1;
		}
		else (player = 2);
		do {
			cout << "Wybierz wiersz w ktory chcesz wstawic swoj znak: " << endl;
			cin >> choice1;
		} while (choice1 < 1 || choice1 > 3);
		do {
			cout << "Wybierz kolumne w ktora chcesz wstawic swoj znak: " << endl;
			cin >> choice2;
		} while (choice2 < 1 || choice2 > 3);
		if (RysujPlansze(choice1, choice2, player) != 1) {

			if (Sprawdzanie('X') != 0) {
				status = Sprawdzanie('X');
			}
			else
				if (Sprawdzanie('O') != 0) {
					status = Sprawdzanie('O');
				}
				else status = 0;

			if (i == 8) {
				cout << "Remis" << endl;
				break;
			}
			else i++;
		}

	} while (status == 0);

	if (status == 1) {
		cout << "Gratulacje, wygral krzyzyk" << endl;
	}
	if (status == 2) {
		cout << "Gratulacje, wygralo kolko" << endl;
	}
}