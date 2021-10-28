#pragma once

bool PeselValidator(const char* peselList, int* peselCurrent); /* funkcja wykonujaca konwersję i zwracajaca poprawność numeru, przyjmuje 2 argumenty: tablice zawierajaca pesele do sprawdzania i tablice zawirajaca skonwertowany pesel, zwraca typ bool - true or false*/
void printPesel(int* peselCurrent); /* funkcja wypisujaca na ekran pesel, przyjmuje 1 argument: tablice zawirajaca skonwertowany pesel, nic nie zwraca */
int getCtrlNumber(int* peselCurrent); /* funkcja obliczajaca sume kontrolna, przyjmuje 1 argument: tablice zawirajaca skonwertowany pesel, zwraca sume kontrolna typu int */
int getDay(int* peselCurrent);  /* funkcja wyznaczajaca dzien urodzenia posiadajac jedynie numer pesel, przyjmuje 1 argument: tablice zawirajaca skonwertowany pesel, zwraca dzien urodzenia typu int*/
int getMonth(int* peselCurrent); /* funkcja wyznaczajaca miesiac urodzenia posiadajac jedynie numer pesel, przyjmuje 1 argument: tablice zawirajaca skonwertowany pesel, zwraca miesiac urodzenia typu int*/
int getYear(int* peselCurrent); /* funkcja wyznaczajaca rok urodzenia posiadajac jedynie numer pesel, przyjmuje 1 argument: tablice zawirajaca skonwertowany pesel, zwraca miesiac urodzenia typu int*/
bool leapYear(int year); /*funkcja do sprawdzenia roku przestępnego (luty 29 dni), jako argument przyjmuje rok urodzenia typu int, zwraca true or false (1 albo 0) */