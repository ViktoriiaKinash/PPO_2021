#include <iostream>
#include <cstring>
#include "pesel.h"

bool PeselValidator(const char* peselList, int* peselCurrent){ 
  int sizeOfPesel = strlen(peselList);

 for(int i=0; i<sizeOfPesel; i++){
  peselCurrent[i]=peselList[i] - 48;
  } 

  if(leapYear(getYear(peselCurrent))==false && getMonth(peselCurrent)==2 && getDay(peselCurrent)==29){
    return false;
  }
  else if (sizeOfPesel==11){
    return true;
  }
  else return false;  
}

void printPesel(int* peselCurrent){
  for(int i=0; i<11; i++){
    std::cout<<peselCurrent[i];
  }
}

int getCtrlNumber(int* peselCurrent){
  int wspolczynniki[]={1,3,7,9,1,3,7,9,1,3};
  int suma;
  for(int i=0; i<11; i++){
    suma+=peselCurrent[i]*wspolczynniki[i];
  }
  suma%=10;
  suma=10-suma;
  suma%=10;
  return suma;
}

int getDay(int* peselCurrent){
  int day = peselCurrent[4]*10+peselCurrent[5];
  return day;
}

int getMonth(int* peselCurrent){ 
  //PESEL:  RR MM DDXXXPK 
  int month;
  if(peselCurrent[2]==0 || peselCurrent[2]==1){
    month=peselCurrent[2]*10+peselCurrent[3];
    return month;
  }
  else if(peselCurrent[2]==2 || peselCurrent[2]==3){
    month=peselCurrent[2]*10+peselCurrent[3]-20;
    return month;
  }
  else {month=peselCurrent[2]*10+peselCurrent[3]-40;
  return month;
  }

}

int getYear(int* peselCurrent){
  int year;
  if(peselCurrent[2]==0 || peselCurrent[2]==1){
    year=1900+peselCurrent[0]*10+peselCurrent[1];
    return year;

  }
  else if(peselCurrent[2]==2 || peselCurrent[2]==3){
    year=2000+peselCurrent[0]*10+peselCurrent[1];
    return year;

  }
  else {year=2100+peselCurrent[0]*10+peselCurrent[1];
  return year;
  }
}

bool leapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}